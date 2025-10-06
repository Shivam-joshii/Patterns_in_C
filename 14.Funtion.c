//Calculate Area of a Circle: Write a C program to calculate the area of a circle using a function that takes the radius as an argument and returns the area.

#include <stdio.h>
#define PI 3.14159  

//  Function Declaration )
float areaOfCircle(float radius);

//  Function Definition
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

   // function call
    area = areaOfCircle(radius);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
