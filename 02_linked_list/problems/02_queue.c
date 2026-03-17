#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

// Insertion (Enqueue)
void enque(int item) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL) {
        printf("\n Overflow \n");
    }
    else {
        printf("\nEnter Value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            ptr->next = NULL;
            head = ptr;
            printf("\nElement inserted into Queue");
        }
        else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Element inserted into Queue\n");
        }
    }
}

// Deletion (Dequeue)
void delque(int item) {
    struct node *ptr;
    if (head == NULL) {
        printf("\n Queue is empty\n");
    }
    else {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nElement is deleted\n");
    }
}

// Display
void display() {
    struct node *ptr;
    ptr = head;
    if (ptr == NULL) {
        printf("Nothing to print");
    }
    else {
        printf("\n Elements are: \n");
        while (ptr != NULL) {
            printf("\t %d", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main() {
    int item, ch, flag = 1;
    printf("Enter 1 to enque\nEnter 2 to delque\nEnter 3 to display\n");
    printf("Enter 0 to Exit\n");
    printf("---------------------------");
    
    while (flag) {
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enque(item);
                break;
            case 2:
                delque(item);
                break;
            case 3:
                display();
                break;
            case 0:
                flag = 0;
                break;
            default:
                printf("Wrong choice !!!");
        }
    }
    return 0;
}