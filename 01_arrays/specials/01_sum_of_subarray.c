/* Print all subarrays with 0 sum
Input:  { 4, 2, -3, -1, 0, 4 }  
 Subarrays with zero-sum are   
  { -3, -1, 0, 4 }
   { 0 }     
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }   
 Subarrays with zero-sum are   
  { 3, 4, -7 }
   { 4, -7, 3 }
    { -7, 3, 1, 3 }
     { 3, 1, -4 } 
      { 3, 1, 3, 1, -4, -2, -2 }
       { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } */
#include <stdio.h>

// Function to print all subarrays with sum 0
void printAllSubarrays(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if (sum == 0) {
                printf("Subarray [%d ... %d]\n", i, j);
            }
        }
    }
}

void display(int nums[], int n)
{
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main()
{
    int nums[20], n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    display(nums, n);
    printAllSubarrays(nums, n);

    return 0;
}
