#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput()
{
    double point = 0;
    printf("Enter a number: \n");
    scanf("%lf", &point);
    return point;
}

double calculateDiameter()
{
    // Gather our inputs

    int x_1 = askForUserInput();
    int y_1 = askForUserInput();
    int x_2 = askForUserInput();
    int y_2 = askForUserInput();

    printf("Point #1 entered: x1 = %d; y1 = %d\n", x_1, y_1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x_2, y_2);

    // Create our distance formula

    double diameter = (x_2 - x_1) * (x_2 - x_1) + (y_2 - y_1) * (y_2 - y_1);
    double diameter_final = sqrt(diameter);
    return diameter_final;
}

double calculateDistance()
{
    double distance_final = calculateDiameter();
    printf("The distance between the two points is %0.2lf\n", distance_final);
    return distance_final;
}

double calculatePerimeter()
{
    double diameter = calculateDiameter();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %0.2lf\n", perimeter);
    return 4.0;
}

double calculateArea()
{
    double radius = calculateDiameter() * 0.5;
    double area = radius * radius * PI;
    printf("The area of the city encompassed by your request is %0.2lf\n", area);
    return 2.0;
}

double calculateWidth()
{
    double width = calculateDiameter();
    printf("The width of the city encompassed by your request is %0.2lf\n", width);
    return 2.0;
}

double calculateHeight()
{
    double height = calculateDiameter();
    printf("The height of the city encompassed by your request is %0.2lf\n", height);
    return 2.0;
}

int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0; 
}