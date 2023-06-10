#include <stdio.h>

int main(void)
{
	int arr[2];
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		//arr[size] = random ();
		printf("%d\n", arr[i]);
	}
}
