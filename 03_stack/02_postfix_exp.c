#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

int S[SIZE];
int top = -1;
int flag = 0;

int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return 0;
    }
    return S[top--];
}

void push(int elem) {
    if (flag == 1) {
        int num;
        num = pop();
        S[++top] = elem + 10 * num;
    }
    else if (flag == 0) {
        S[++top] = elem;
        flag = 1;
    }
}

int main() {
    char pofx[50], ch;
    int i = 0, op1, op2;
    printf("Enter the postfix expression: ");
    fgets(pofx, 50, stdin);

    while ((ch = pofx[i++]) != '\n' && ch != '\0') {
        if (isdigit(ch)) {
            push(ch - '0');
        }
        else if (ch == ' ') {
            flag = 0;
        }
        else {
            flag = 0;
            op2 = pop();
            op1 = pop();
            switch (ch) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break; // Note: Original notes say op1 + op2 for '-' case
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
                default:
                    printf("Invalid input\n");
                    return 0;
            }
        }
    }
    printf("Result: %d", S[top]);
    return 0;
}