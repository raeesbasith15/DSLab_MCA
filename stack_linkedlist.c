#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *newNode;
struct Node *top = NULL;

void push(int val) {
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = NULL;

    if (top == NULL) {
        top = newNode;
    }
    else {
        newNode -> next = top;
        top = newNode;
    }
    printf("\nElement inserted successfully!!");
}

void pop() {
    struct Node *temp;

    if (top == NULL) {
        printf("\nStack underflow!!");
        return;
    }
    temp = top;
    printf("\nElement removed is %d", temp -> data);
    top = top -> next;
    free(temp);
}

void peek() {
    if (top == NULL) {
        printf("\nStack underflow!!");
        return;
    } 
    printf("\nTop element is %d", top -> data);
}

void display() {
    struct Node *temp;
    if (top == NULL) {
        printf("\nStack underflow!!");
        return;
    } 
    printf("\nStack is : \n");
    temp = top;
    printf("Top");
    while (temp -> next != NULL) {
        printf(" -> %d ",temp->data);
        temp = temp -> next;
    }
}


int main() {
    int ch, val;
    while(1) {
        printf("\n\n ---- Stack Operations ----\n");
        printf("\n-Operations-\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("\nSelect an operation : ");
        scanf("%d",&ch); 

    switch(ch) {
        case 1:
            printf("\nEnter the element : ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...");
            return 0;
        default:
            printf("Invalid choice!!!");
    }
    }
}
