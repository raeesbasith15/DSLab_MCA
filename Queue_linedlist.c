#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int *val) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    
    newNode -> data = *val;
    newNode -> next = NULL;

    if (front == NULL) {
        front = newNode;
        rear = newNode;
        return;
    }
    rear -> next = newNode;
    rear = newNode;
} 

void dequeue() {
    struct Node *temp;
    if (front == NULL) {
        printf("\nQueue Underflow!!!"); 
        return;
    }
    temp = front;
    front = front -> next;
    printf("Element removed is %d", temp->data);
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Queue underflow!!!");
        return;
    }
    struct Node *temp;
    temp = front;
    printf("front -> ");
    while (temp != rear -> next) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("rear");
}

int main() {
    int choice, val;
    while (1) {
        printf("\n---Queue Operations---\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &val);
                enqueue(&val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting....");
                exit(0);
            default:
                printf("\nInvalid choice!!!");
        }
    }
    return 0;
}


