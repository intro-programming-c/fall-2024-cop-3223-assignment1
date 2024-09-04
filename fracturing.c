//********************************************************
// fracturing.c 
// Author: Corday Davis, co140781
// Date: 9/4/2024
// Class: COP 3223, Professor Parra
// Purpose: This program asks the user for points of a
// city and calculates five different values.
//********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//********************************************************
// double askForUserInput ()
// Purpose: Helper function that will assist with
// scanning the user's double values when prompted.
// Input: Double value that represents a point
// Output: None
// Return: Value of the user given point
//******************************************************** 

double askForUserInput()
{
    double startingPoint = 0;
    scanf("%lf", &startingPoint);
    return startingPoint;
}

//********************************************************
// double calculateDiameter ()
// Purpose: To ask the user for a value representing a 
// point in a coordinate of a city.
// Input: Double values for coordinates of the city.
// Output: Printed statements that asks the user to 
// enter a number for the X and Y points.
// Return: Double representing the diameter.
//******************************************************** 

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

//******************************************************** 
// double calculateDistance ()
// Purpose: To calculate the distance of the two user 
// given points.
// Input: Double values for coordinates of the city.
// Output: Printed statements that asks the user to 
// enter a number for the X and Y points. Another
// printed statement for distance.
// Return: Double representing the distance.
//********************************************************

double calculateDistance()
{
    double distanceFinal = calculateDiameter();
    printf("The distance between the two points is %0.3lf\n", distanceFinal);
    return distanceFinal;
}

//********************************************************
// double calculatePerimeter ()
// Purpose: To calculate the perimeter of the city circle.
// Input: Double values for coordinates of the city.
// Output: Printed statements that asks the user to 
// enter a number for the X and Y points. Another
// printed statement for perimeter.
// Return: Double between 1.0(easy)-5.0(hard) representing 
// the difficulty of creating this function.
//********************************************************

double calculatePerimeter()
{
    double diameter = calculateDiameter();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %0.3lf\n", perimeter);
    return 4.0;
}

//********************************************************
// double calculateArea ()
// Purpose: To calculate the area of the city circle.
// Input: Double values for coordinates of the city.
// Output: Printed statements that asks the user to 
// enter a number for the X and Y points. Another
// printed statement for area.
// Return: Double between 1.0(easy)-5.0(hard) representing
// the difficulty of creating this function.
//********************************************************

double calculateArea()
{
    double radius = calculateDiameter() * 0.5;
    double area = radius * radius * PI;
    printf("The area of the city encompassed by your request is %0.3lf\n", area);
    return 2.0;
}

//********************************************************
// double calculateWidth ()
// Purpose: To calculate the width of the city circle.
// Input: Double values for coordinates of the city.
// Output: Printed statements that asks the user to 
// enter a number for the X and Y points. Another
// printed statement for width.
// Return: Double between 1.0(easy)-5.0(hard) representing 
// the difficulty of creating this function.
//********************************************************

double calculateWidth()
{
    double width = calculateDiameter();
    printf("The width of the city encompassed by your request is %0.3lf\n", width);
    return 2.0;
}

//********************************************************
// Purpose: To calculate the height of the city circle.
// Input: Double values for coordinates of the city.
// Output: Printed statements that asks the user to 
// enter a number for the X and Y points. Another
// printed statement for height.
// Return: Double between 1.0(easy)-5.0(hard) representing 
// the difficulty of creating this function.
//********************************************************

double calculateHeight()
{
    double height = calculateDiameter();
    printf("The height of the city encompassed by your request is %0.3lf\n", height);
    return 2.0;
}

//********************************************************
// int main (int argc, char **argv)
// Purpose: The main function that will call all 
// functions defined above.
// Output: None.
// Return: Integer of 0.
//********************************************************

int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0; 
}