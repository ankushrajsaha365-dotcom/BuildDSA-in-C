#include <stdio.h>
#define MAXSIZE 5
char queue[MAXSIZE];
int front = -1, rear = -1;

void ENQUE()
{
    char x;
    if (rear == MAXSIZE - 1) {
        printf("\n Queue Overflow ");
    }
    else
    {
        if (rear == -1) {
            front = 0;
        }
        rear++;
        printf("\n Inserted element: ");
        scanf(" %c", &x);
        queue[rear] = x;
    }
}

void DELQUE()
{
    if (front == -1) {
        printf("\n Queue Underflow ");
    }
    else 
    {
        printf("\n Deleted element is %c", queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }
}

void display()
{
    int i;
    if (front == -1) {
        printf("\n Queue Empty");
    }
    else 
    {
        printf("\n Queue elements are: ");
        for (i = front; i <= rear; i++)
        {
            printf(" %c", queue[i]);
        }
    }
}

int main()
{
    int i, ch;
    while (1)
    {
        printf("\n Enter 1 for ENQUE \n Enter 2 for DELQUE \n Enter 3 for display \n");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                ENQUE();
                break;
            case 2:
                DELQUE();
                break;
            case 3:
                display();
                break;
            default:
                printf("\n Wrong choice!");
        }
    }
    return 0;
}