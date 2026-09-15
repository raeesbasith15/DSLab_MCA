#include<stdio.h>
struct Node {
    int data; 
    struct Node *next;
}
struct Node *head = NULL;
void insertb(){
    struct Node *newNode; 
    int val; 
  
    newNode = malloc(sizeof(struct Node));
  
    printf("Enter the value : "); 
    scanf("%d", &val)
  
    newNode -> data = val; 
    newNode -> next = head; 
  
    head = newNode; 
} 

insertend() {
    struct Node *newNode;
    int val;

    temp = head;
    newNode = malloc(sizeof(struct Node));
    
    printf("Enter the value : "); 
    scanf("%d", &val)

    newNode -> data = val;
    newNode -> next = NULL;

    while(temp -> next != Null){
        temp = temp -> next;
    }
    temp -> next = newNode;
    
}
void insertp(){
    int val, pos;

    if (pos == 1){
        insertb();
        return;
    }
    
    temp = head;
    newNode = malloc(sizeof(struct Node));
    
    printf("Enter the value : "); 
    scanf("%d", &val)

    newNode -> data = val;
    newNode -> next = NULL;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void display() {
    temp = head;
    printf("\n-Your List-\n");
    while(temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}

