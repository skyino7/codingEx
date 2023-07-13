#include <stdio.h>

int main(void) {

    int n;
    int arr[5];
    int *ptr;

    arr[2] = 1024;  // Assign address of arr[2] to the pointer
    ptr = &n;   // Modify the value using pointer dereference

    // ptr = &arr[5];  // Assign address of arr[5] to the pointer
    // *ptr = 98;     // Modify the value using pointer dereference

    // Print the modified array
    for (int i = 0; i < 6; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    printf("\n");

    printf("arr[2]: %d\n", arr[2]);

    *(ptr + 7) = 98;

    printf("Change arr[2]: %d\n", arr[2]);

    printf("\n");

	printf("N: %p\n", &n);
    printf("PTR: %p\n", ptr);

    printf("\n");

    printf("PTR 1: %p\n", ptr+1);
    printf("PTR 2: %p\n", ptr+2);
    printf("PTR 3: %p\n", ptr+3);
    printf("PTR 4: %p\n", ptr+4);
    printf("PTR 5: %p\n", ptr+5);
    printf("PTR 6: %p\n", ptr+6);
    printf("PTR 7: %p\n", ptr+7);

    printf("\n");

    printf("arr0: %p\n", &arr[0]);
    printf("arr1: %p\n", &arr[1]);
    printf("arr2: %p\n", &arr[2]);
    printf("arr3: %p\n", &arr[3]);
    printf("arr4: %p\n", &arr[4]);
    printf("arr5: %p\n", &arr[5]);
    // printf("arr6: %p\n", &arr[6]);

    for (int i = 0; i < 6; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;

}