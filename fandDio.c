#include <stdio.h>

int main(void)
{
	float num1;
	double num2;

	int sum;

	printf("Enter a number: ");
	scanf("%f", &num1);

	printf("Enter another number: ");
	scanf("%lf", &num2);

	printf("num1 = %f\n", num1);
	printf("num2 = %lf\n", num2);

	sum = num1 + num2;
	printf("The Sum of FanD is %d\n", sum);

	return (0);
}
