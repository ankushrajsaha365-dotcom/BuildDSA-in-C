// Input:  ((x+y))+z 
// Output: true 
// Explanation: Duplicate () found in subexpression ((x+y))  

// Input:  (x+y) 
// Output: false 
// Explanation: No duplicate () is found     

// Input:  ((x+y)+((z))) 
// Output: true 
// Explanation: Duplicate () found in subexpression ((z)) 

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool hasDuplicateParentheses(char *expr) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; expr[i] != '\0'; i++) {
        
        // If current char is closing bracket
        if (expr[i] == ')') {
            int count = 0;

            // Pop until '('
            while (top >= 0 && stack[top] != '(') {
                top--;
                count++;
            }

            // Pop the '('
            if (top >= 0)
                top--;

            // If no elements inside ()
            if (count <= 0)
                return true;
        }
        else {
            // Push current char
            stack[++top] = expr[i];
        }
    }

    return false;
}

int main() {
    char expr1[] = "((x+y))+z";
    char expr2[] = "(x+y)";
    char expr3[] = "((x+y)+((z)))";

    printf("%s -> %s\n", expr1, hasDuplicateParentheses(expr1) ? "true" : "false");
    printf("%s -> %s\n", expr2, hasDuplicateParentheses(expr2) ? "true" : "false");
    printf("%s -> %s\n", expr3, hasDuplicateParentheses(expr3) ? "true" : "false");

    return 0;
}