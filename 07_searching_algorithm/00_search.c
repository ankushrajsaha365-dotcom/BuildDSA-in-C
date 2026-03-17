#include <stdio.h>
#define MAX 10

// Sorting (Required for both search algorithms)
void bubblesort(int A[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

// Binary Search
int binarysearch(int A[], int n, int key, int *iteration) {
    int low = 0, high = n - 1;
    *iteration = 0;
    while (low <= high) {
        (*iteration)++;
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Interpolation Search
int interpolation(int A[], int n, int key, int *iteration) {
    int low = 0, high = n - 1;
    *iteration = 0;
    while (low <= high && key >= A[low] && key <= A[high]) {
        (*iteration)++;
        if (low == high) {
            if (A[low] == key) return low;
            return -1;
        }
        
        // Position estimation formula
        int pos = low + ((double)(high - low) / (A[high] - A[low]) * (key - A[low]));

        if (A[pos] == key)
            return pos;
        else if (A[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main() {
    int A[MAX], n, key, c, i;
    int index, iteration1, iteration2;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &A[i]);
    }

    bubblesort(A, n);
    printf("\nElements after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nEnter key element: ");
    scanf("%d", &key);

    printf("\n Menu -----");
    printf("\n 1. Binary Search");
    printf("\n 2. Interpolation Search");
    printf("\n 0. Exit");

    do {
        printf("\n\n Enter choice: ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                index = binarysearch(A, n, key, &iteration1);
                if (index != -1)
                    printf("\nElement found at position %d using Binary Search (Iterations: %d)\n", index + 1, iteration1);
                else
                    printf("\n Element not found\n");
                break;

            case 2:
                index = interpolation(A, n, key, &iteration2);
                if (index != -1)
                    printf("\nElement found at position %d using Interpolation Search (Iterations: %d)\n", index + 1, iteration2);
                else
                    printf("\n Element not found\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (c != 0);

    return 0;
}