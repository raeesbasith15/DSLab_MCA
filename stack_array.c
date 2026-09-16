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
void display() {
    if (top == -1) {
        printf("\nStack empty!!!");
        return;
    }
    printf("\n--Stack--\n");
    for (int i = top - 1; i >= 0; i++) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    
}