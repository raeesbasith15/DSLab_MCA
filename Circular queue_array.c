#include <stdio.h>
#define max 5

int front = -1;
int rear = -1;

void enqueue(int *val, int queue[]) {
    if (((rear + 1) % max) == front) {
        printf("\nQueue overflow\n");
        return;
    }
    if (front == -1) {
        front = 0; 
    }
    rear = (rear + 1) % max;
    queue[rear] = *val;
    printf("\nValue inserted successfully!!!");

}

void dequeue(int queue[]) {
    if (front == -1) {
        printf("\nQueue empty!!!");
        return;
    }
    int val = queue[front]; 
    printf("\nElement removed is %d", val);
    front = (front + 1) % max; 
    if (front == rear) {
        front = -1;
        rear = -1;
    } 
}

void display(int queue[]) {
    int i = front;
    if (front == -1) {
        printf("\nQueue empty!!!");
        return;
    }
    printf("\nQueue : \n");
    do {
        printf("%d ",queue[i]);
        i = (i + 1) % max;
    } while (i != (rear + 1) % max);

}

int main() {
    int queue[max], choice, val;
    while (1) {
        printf("\n\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter value to be inserted: ");
                scanf("%d", &val);
                enqueue(&val, queue);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid choice!!!");
        }
    }
}