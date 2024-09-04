#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput()
{
    double startingPoint = 0;
    //printf("Enter a number: \n");
    scanf("%lf", &startingPoint);
    return startingPoint;
}

double calculateDiameter()
{
    // Gather our inputs
    printf("Enter a number for point x1: \n");
    int x1 = askForUserInput();
    printf("Enter a number for point x2: \n");
    int x2 = askForUserInput();
    printf("Enter a number for point y1: \n");
    int y1 = askForUserInput();
    printf("Enter a number for point y2: \n");
    int y2 = askForUserInput();

    printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

    // Create our distance formula

    double diameter = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    double diameterFinal = sqrt(diameter);
    return diameterFinal;
}

double calculateDistance()
{
    double distanceFinal = calculateDiameter();
    printf("The distance between the two points is %0.3lf\n", distanceFinal);
    return distanceFinal;
}

double calculatePerimeter()
{
    double diameter = calculateDiameter();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %0.3lf\n", perimeter);
    return 4.0;
}

double calculateArea()
{
    double radius = calculateDiameter() * 0.5;
    double area = radius * radius * PI;
    printf("The area of the city encompassed by your request is %0.3lf\n", area);
    return 2.0;
}

double calculateWidth()
{
    double width = calculateDiameter();
    printf("The width of the city encompassed by your request is %0.3lf\n", width);
    return 2.0;
}

double calculateHeight()
{
    double height = calculateDiameter();
    printf("The height of the city encompassed by your request is %0.3lf\n", height);
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