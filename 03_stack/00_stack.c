#include <stdio.h>
#define Maxsize 5
int stack [Maxsize], top=-1;

// Push
void push() {
    int x;
    if (top == Maxsize - 1) {
        printf("Stack overflow");
    }
    else {
        top++;
        printf("Enter element to enter: ");
        scanf("%d", &x);
        stack[top] = x;
    }
}

// Pop
void pop() {
    if (top == -1) {
        printf("stack is empty");
    }
    else {
        top--;
    }
}

// Display
void display() {
    int i;
    printf("The elements are : ");
    for (i=top; i>=0; i--) {
        printf("\n %d", stack[i]);
    }
}

int main() {
    int i, ch;
    while (1) {
        printf("\n Enter 1 to Push \n Enter 2 to Pop \n Enter 3 to Display \n");
        printf("--------------------------");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Wrong choice!!!");
        }
    }
    return 0;
}