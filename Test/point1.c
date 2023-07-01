#include <stdio.h>

int main(void) {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr;

    ptr = &arr[2];  // Assign address of arr[2] to the pointer
    *ptr = 1024;   // Modify the value using pointer dereference

    ptr = &arr[5];  // Assign address of arr[5] to the pointer
    *ptr = 98;     // Modify the value using pointer dereference

    // Print the modified array
    for (int i = 0; i < 6; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;

}