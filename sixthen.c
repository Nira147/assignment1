#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 10, 12, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest number is: %d\n", largest);

    return 0;
}








