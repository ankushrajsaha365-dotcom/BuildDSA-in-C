#include <stdio.h>

int main() {

    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int capacity = 10;

    int position = 2;  // insert at index 2
    int value = 99;

    if (size >= capacity) {
        printf("Array is full\n");
        return 0;
    }

    // Shift elements to right
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = value;
    size++;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
