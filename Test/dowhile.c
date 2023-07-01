#include <stdio.h>

int main(void)
{

    // int i = 1;

	// do
	// {
	// 	printf("%d\n", i);
	// 	i++;
	// }
	// while (i < 6);

    // for (int i = 0; i < 10; i++) {
    //     if (i == 5) {
    //         break;
    //     }
    //     printf("%d\n", i);
    // }

    // for (int i = 0; i < 10; i++) {
    //     if (i == 4) { 
    //         continue;
    //     }
    //     printf("%d\n", i);
    // }

    int myNumbers[] = {25, 50, 75, 100};
        
        int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    char greetings[] = "Hello World!";
    
    printf("%c\n", greetings[0]);

}