#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

// Insertion (Push)
void push(int item) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL) {
        printf("\n Overflow\n");
    }
    else {
        printf("\nEnter Value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL) {
            ptr->next = NULL;
            head = ptr;
            printf("\nElement is Pushed into stack \n");
        }
        else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nElement is Pushed into stack \n");
        }
    }
}

// Deletion (Pop)
void pop(int item) {
    struct node *ptr, *ptr1;
    if (head == NULL) {
        printf("\nList is empty\n");
    }
    else if (head->next == NULL) {
        head = NULL;
        free(head);
        printf("\nElement is popped\n");
    }
    else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nElement is popped\n");
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
    int item, ch, Flag = 1;
    printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to display\n");
    printf("\nEnter 0 to Exit\n");
    printf("--------------------------");
    
    while (Flag) {
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push(item);
                break;
            case 2:
                pop(item);
                break;
            case 3:
                display();
                break;
            case 0:
                Flag = 0;
                break;
            default:
                printf("Wrong Choice !!!");
        }
    }
    return 0;
}