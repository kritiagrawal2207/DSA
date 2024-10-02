#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createHeaderNode() {
    struct Node* header = (struct Node*)malloc(sizeof(struct Node));
    if (!header) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    header->coeff = 0;
    header->exp = -1;
    header->next = NULL;
    return header;
}

void insert(struct Node* header, int coeff, int exp) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (!newnode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->coeff = coeff;
    newnode->exp = exp;
    newnode->next = NULL;

    struct Node* temp = header;
    while (temp->next != NULL && temp->next->exp > exp) {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display(struct Node* header) {
    struct Node* temp = header->next;
    if (temp == NULL) {
        printf("0\n");
        return;
    }

    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->exp);
        if (temp->next != NULL) {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");
}

void addPolynomial(struct Node* p1, struct Node* p2) {
    struct Node* temp1 = p1->next;
    struct Node* temp2 = p2->next;
    struct Node* result = createHeaderNode();

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->exp > temp2->exp) {
            insert(result, temp1->coeff, temp1->exp);
            temp1 = temp1->next;
        } else if (temp2->exp > temp1->exp) {
            insert(result, temp2->coeff, temp2->exp);
            temp2 = temp2->next;
        } else {
            int sumCoeff = temp1->coeff + temp2->coeff;
            if (sumCoeff != 0) {
                insert(result, sumCoeff, temp1->exp);
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL) {
        insert(result, temp1->coeff, temp1->exp);
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        insert(result, temp2->coeff, temp2->exp);
        temp2 = temp2->next;
    }

    printf("Resultant Polynomial: ");
    display(result);
}

int main() {
    struct Node* p1 = createHeaderNode();
    struct Node* p2 = createHeaderNode();

    insert(p1, 4, 3);
    insert(p1, 3, 2);
    insert(p1, 2, 1);

    insert(p2, 3, 4);
    insert(p2, 5, 2);
    insert(p2, 6, 1);

    printf("Polynomial 1: ");
    display(p1);

    printf("Polynomial 2: ");
    display(p2);

    addPolynomial(p1, p2);

    return 0;
}

