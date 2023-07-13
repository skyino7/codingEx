#include <stdio.h>

/**
 * Find the diameter, circumfence
 * and area of circle
*/

int main(void)
{
    float radius, diameter, circum, area;

    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circum = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    printf("Diameter of the Circle is %.2f units\n", diameter);
    printf("Circumfence of the Circle is %.2f units\n", circum);
    printf("Area of the Circle is %.2f units\n", area);

    return (0);
}