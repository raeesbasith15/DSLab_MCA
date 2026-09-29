#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *newNode;
struct Node *top = NULL;

void push(int val) {
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = *val;
    newNode -> next = top;
    top = newNode;
    printf("Element pushed successfully!!");
}

void pop(){
    struct Node *temp;
    if (top == NULL) {
        printf("\nStack underflow!!!");
    }
    temp = top;
    top = top -> next;
    printf("\nElement removed is : %d", temp -> data);
    free(temp);
}

void display() {
    struct Node *temp;
    if (top == NULL) {
        printf("\nStack underflow!!!");
        return;
    }
    temp = top;
    printf("\nStack elements are : ");
    while (temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
void peek() {
    if (top == NULL) {
        printf("\nStack underflow!!!");
        return;
    } 
    printf("\nTop element is : %d", top -> data);
}

int main () {
    int choice, val;
    while (1) {
        printf("\n---Stack Operations---\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &val);
                push(&val);
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
                printf("\nExiting....");
                exit(0);
            default:
                printf("Invalid choice!!!");
        }
    }
    return 0;
}