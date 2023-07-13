#include <stdio.h>

/**
 * Finding the area of rectangle from user input
*/

int main(void)
{
    float area, lenght, width;

    printf("Enter Lenght of Rectangle: \n");
    scanf("%f", &lenght);
    printf("Enter Width of Rectangle: \n");
    scanf("%f", &width);

    area = lenght * width;

    printf("The Area of the Rectangle = %.2f Sq. units\n", area);

    return (0);
}