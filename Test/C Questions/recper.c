#include <stdio.h>

/**
 * Find the perimeter of rectangle
 * 
 */

int main(void)
{
    float lenght, width, perimeter;

    /*User inputs lenght and width of rectangle*/

    printf("Enter lenght of the rectangle: \n");
    scanf("%f", &lenght);
    printf("Enter width of the rectangle: \n");
    scanf("%f", &width);

    /*Checking to make sure the user has entered a number greater than 0 for lenght and width*/
    if (lenght == 0 && width == 0)
    {
        printf("Re-enter lenght of the rectangle: \n");
        scanf("%f", &lenght);
        printf("Re-Enter width of the rectangle: \n");
        scanf("%f", &width);
    }

    perimeter = 2 * (lenght + width);

    /*Print perimeter of rectangle*/
    printf("Perimeter of Rectangle is = %.2f units \n", perimeter);

    return (0);
}