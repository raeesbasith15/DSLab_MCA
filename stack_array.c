#include <stdio.h> 
#define MAX 15

int top = -1;
int stack[MAX];
void push() {
    int val;
    printf("\nEnter the element : ");
    scanf("%d", &val);

    if (top == (MAX - 1)) {
        printf("\nStack overflow!!!");
        return;
    }
    top++;
    stack[top] = val; 
    printf("%d added successfully!!!",val);
} 
void pop() {
    int val;
    if (top == -1){
        printf("Stack underflow!!!");
        return;
    }
    val = stack[top];
    top--;
    printf("\nElement removed is : %d", val);
}

void peek() {
    if (top == -1) {
        printf("\n-Stack underflow!-");
        return;
    }
    printf("\nTop of the stack is : %d", stack[top]);
}
void display() {
    if (top == -1) {
        printf("\nStack empty!!!");
        return;
    }
    printf("\n--Stack--\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int ch;
    while(1) {
        printf("\n---- Stack Operations ----\n");
        printf("\n-Operations-\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("\nSelect an operation : ");
        scanf("%d",&ch); 

    switch(ch) {
        case 1:
            push();
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