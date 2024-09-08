//********************************************************
// Fracturing.c
// Author: Mariano Montoya
// Class: COP 3223, Professor Parra
// Purpose: The main purpose is to prove I can use different functions and call them in the main function.
// Input: 25, 5.8, A
//
// Output: (to the command line) A brief statement showing the
// input information.
// //********************************************************


//added libraries
#include <stdio.h>
#include <math.h>

//function that will calculate the distance between two points
double calculateDistance() {
    //declaring the type of the values
    double x1, y1, x2, y2;

    printf("Calculate Distance:\n");

    //I added scanf to ask the user the points to be use
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Input provided from the user stated as requested in the pdf
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n",x1, y1);

    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n",x2, y2);

    // Formula for the distance of two points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // The statement showing the result of the distance function
    printf("The distance between the two points is: %.2lf\n", distance);

    return distance;
}

// this function will calculate the perimeter based on the distance
double calculatePerimeter() {

    //declaring the type of the values
    double x1, y1, x2, y2;


    printf("Calculate Perimeter:\n");

    //I added scanf to ask the user the points to be use
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Input provided from the user stated as requested in the pdf
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n",x1, y1);

    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n",x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Formula for the perimeter based on the distance
    double perimeter = distance*4;

    // The statement showing the result of the perimeter function
    printf("The perimeter between the two points is: %.2lf\n", perimeter);

    return perimeter;
}

// this function will calculate the area based on the two points provided
double calculateArea() {

    //declaring the type of the values
    double x1, y1, x2, y2;

    printf("Calculate Area:\n");

    //I added scanf to ask the user the points to be use
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Input provided from the user stated as requested in the pdf
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n",x1, y1);

    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n",x2, y2);

    // Formula for the area based of two points
    double area = (x2-x1)*(y2-y1);

    // The statement showing the result of the area function
    printf("The area of the city encompassed by your request is: %.2lf\n", area);

    return area;
}

// this function will calculate the width based on the two points provided
double calculateWidth() {

    //declaring the type of the values
    double x1, y1, x2, y2;

    printf("Calculate Width:\n");

    //I added scanf to ask the user the points to be use
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Input provided from the user stated as requested in the pdf
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n",x1, y1);

    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n",x2, y2);

    // Formula for the width based of two points
    double width = (x2-x1);

    // The statement showing the result of the width function
    printf("The width of the city encompassed by your request is: %.2lf\n", width);

    return width;
}

// this function will calculate the Height based on the two points provided
double calculateHeight() {

    //declaring the type of the values
    double x1, y1, x2, y2;

    printf("Calculate Height:\n");

    //I added scanf to ask the user the points to be use
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Input provided from the user stated as requested in the pdf
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n",x1, y1);

    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n",x2, y2);

    // Formula for the height based of two points
    double height = (y2-y1);

    // The statement showing the result of the height function
    printf("The height of the city encompassed by your request is: %.2lf\n", height);

    return height;
}


int main(int argc, char **argv) {
    // Calling the functions and not having and output on the main function as requested in the pdf.
   calculateDistance();
   calculatePerimeter();
   calculateArea();
   calculateWidth();
   calculateHeight();

    return 1;
}
