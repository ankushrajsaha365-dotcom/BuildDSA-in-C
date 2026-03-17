#include <stdio.h>
int n;

// Insert an element
void insert (int arr[]) {
    int x, p, i;
    printf(" Enter element to be inserted");
    scanf("%d" , &x);
    printf(" Enter position :");
    scanf("%d", &p);
    if(p<=n){
        for(i=n; i>=p-1; i--) {
            arr[i]=arr[i-1];
        }
        arr[p-1] = x;
        n++;
    }
}

// Delete an element
void del (int arr[]) {
    int p, i;
    printf("Enter position of element to be deleted");
    scanf("%d", &p);
    if(p<=n){
        for(i=p-1; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        n--;
    }
}

// Linear Search
void search (int arr[]) {
    int p, i;
    printf(" Enter the element to search ");
    scanf("%d" , &p);
    for (i=0; i<n; i++) {
        if (arr [i]==p) {
            printf(" The element %d is present in %d index", p, i+1);
            break;
        }
        if (i==n) {
            printf(" The element %d is not present", p);
        }
    }
}

// Replace an element
void replace (int arr[]) {
    int p, x;
    printf("Enter the position to replace:");
    scanf("%d", &p);
    printf("Enter new value : ");
    scanf("%d", &x);
    if (p<=n) {
        p=p-1;
        arr[p] = x;
    }
}

// Display
void display(int arr[]) {
    int i;
    printf("Array elements are: ");
    for(i=0; i<n; i++) {
        printf("\n%d ", arr[i]);
    }
}

int main() {
    int arr[20], i, ch;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter element to input: \n");
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    while(1) {
        printf("\n Enter 1 to Insert \n Enter 2 to delete \n Enter 3 to Linear search \n Enter 4 to Replace \n Enter 5 to Display \n");
        printf("--------------------------");
        printf("\n Enter your choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1 :
            insert(arr);
            break;
        case 2:
            del(arr);
            break;
        case 3:
            search(arr);
            break;
        case 4:
            replace(arr);
            break;
        case 5:
            display(arr);
            break;
        default:
            printf(" Wrong choice !!!");
        }
    }
    return 0;
}