#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node *next;
};

struct Node *createNode(int coeff, int power) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}

void insertTerm(struct Node **poly, int coeff, int power) {
    struct Node *newNode = createNode(coeff, power);
    if (*poly == NULL || (*poly)->power < power) {
        newNode->next = *poly;
        *poly = newNode;
    }
    else {
        struct Node *temp = *poly;
        while (temp->next != NULL && temp->next->power > power) {
            temp = temp->next;
        }
        if (temp->next != NULL && temp->next->power == power) {
            temp->next->coeff += coeff;
            free(newNode); // Term already exists, just add coefficient
        }
        else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void display(struct Node *poly) {
    while (poly != NULL) {
        printf("%d x^%d", poly->coeff, poly->power);
        poly = poly->next;
        if (poly != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Function to add two polynomials
struct Node *addPolynomials(struct Node *ptr1, struct Node *ptr2) {
    struct Node *ptr3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->power > ptr2->power) {
            insertTerm(&ptr3, ptr1->coeff, ptr1->power);
            ptr1 = ptr1->next;
        }
        else if (ptr1->power < ptr2->power) {
            insertTerm(&ptr3, ptr2->coeff, ptr2->power);
            ptr2 = ptr2->next;
        }
        else {
            insertTerm(&ptr3, ptr1->coeff + ptr2->coeff, ptr1->power);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    while (ptr1 != NULL) {
        insertTerm(&ptr3, ptr1->coeff, ptr1->power);
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL) {
        insertTerm(&ptr3, ptr2->coeff, ptr2->power);
        ptr2 = ptr2->next;
    }
    return ptr3;
}

int main() {
    struct Node *ptr1 = NULL, *ptr2 = NULL, *ptr3 = NULL;
    int i, n, coeff, power;

    printf("Enter the number of terms in first polynomial: ");
    scanf("%d", &n);
    printf("Enter terms in format: coefficient power\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &power);
        insertTerm(&ptr1, coeff, power);
    }

    printf("Enter the number of terms in second polynomial: ");
    scanf("%d", &n);
    printf("Enter terms in format: coefficient power\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &power);
        insertTerm(&ptr2, coeff, power);
    }

    printf("\nFirst Polynomial: ");
    display(ptr1);
    printf("\nSecond Polynomial: ");
    display(ptr2);

    ptr3 = addPolynomials(ptr1, ptr2);
    printf("Sum Polynomial: ");
    display(ptr3);

    return 0;
}