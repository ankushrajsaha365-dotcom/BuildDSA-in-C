#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int key = 30;

    int found = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}


/*
Approach:
Compare each element with key.

Time Complexity:
Best Case: O(1)  (found at first index)
Worst Case: O(n)
Average Case: O(n)

Space Complexity:
O(1)
*/
