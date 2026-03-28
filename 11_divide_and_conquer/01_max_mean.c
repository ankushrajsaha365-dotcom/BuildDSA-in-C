// Using Divide and Conquer Technique write a C program to implement Max-Min Problem.

#include <stdio.h>
#include <stdlib.h>

void findMinMax(int arr[], int low, int high, int *min, int *max) {

    // If only one element
    if (low == high) {
        *min = *max = arr[low];
        return;
    }

    // If two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            *min = arr[low];
            *max = arr[high];
        } else {
            *min = arr[high];
            *max = arr[low];
        }
        return;
    }

    int mid = (low + high) / 2;

    int min1, max1, min2, max2;

    // Divide & Conquer
    findMinMax(arr, low, mid, &min1, &max1);
    findMinMax(arr, mid + 1, high, &min2, &max2);

    // Combine
    *min = (min1 < min2) ? min1 : min2;
    *max = (max1 > max2) ? max1 : max2;
}

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;

    findMinMax(arr, 0, n - 1, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    free(arr);

    return 0;
}