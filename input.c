#include <stdio.h>
// #include <string.h>

int main(void)
{
    char ch[20];

    int age;

    printf("Please Enter Your Name:\n");
    scanf("%s", ch);

    printf("Please Enter Your Age:\n");
    scanf("%d", &age);
    
    printf("Hello, %s, your age is %d\n", ch, age);
    

    return (0);
}
