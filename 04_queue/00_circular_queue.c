#include <stdio.h>
#define Maxsize 3
char queue[Maxsize];
int front = -1, rear = -1;

// CENQUE
void cenque() {
    char x;
    if (front == (rear + 1) % Maxsize) {
        printf("Queue overflow");
    }
    else {
        printf("Enter element to insert: ");
        scanf(" %c", &x);
        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % Maxsize;
        }
        queue[rear] = x;
    }
}

// CDELQUE
void cdelque() {
    if (front == -1) {
        printf("\n Queue Underflow");
    }
    else {
        printf("\n The deleted element is %c", queue[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else if (front == Maxsize - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }
}

// CDISPLAY
void cdisplay() {
    int i;
    if (front == -1) {
        printf("Queue is empty ");
    }
    else {
        printf("The Elements are: ");
        if (front <= rear) {
            for (i = front; i <= rear; i++) {
                printf("\t %c", queue[i]);
            }
        }
        else {
            i = front;
            while (i != rear) {
                printf("\t %c", queue[i]);
                i = (i + 1) % Maxsize;
            }
            printf("\t %c", queue[i]);
        }
    }
}

main() {
    int i, ch;
    while (1) {
        printf("\n Enter 1 to CENQUE \n Enter 2 to CDELQUE \n Enter 3 to CDisplay \n");
        printf("---------------------------");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            cenque();
            break;
        case 2:
            cdelque();
            break;
        case 3:
            cdisplay();
            break;
        default:
            printf("Wrong choice !!!");
        }
    }
    return 0;
}