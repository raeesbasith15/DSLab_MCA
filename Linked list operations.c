#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data; 
    struct Node *next;
};
struct Node *head = NULL;
struct Node *temp = NULL;
struct Node *newNode = NULL;
void insertb(){
    int val; 
  
    newNode = (struct Node *)malloc(sizeof(struct Node));
  
    printf("Enter the value : "); 
    scanf("%d", &val);
  
    newNode -> data = val; 
    newNode -> next = head; 
  
    head = newNode; 
} 

void insertend() {
    int val;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    
    printf("Enter the value : "); 
    scanf("%d", &val);

    newNode -> data = val;
    newNode -> next = NULL;

    if (head == NULL) {
        insertb();
        return;
    }
    temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    
}
void insertp(){
    int val, pos;

    printf("\nEnter the position to insert : ");
    scanf("%d", &pos);
    if (pos == 1){
        insertb();
        return;
    }
    
    temp = head;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    
    printf("Enter the value : "); 
    scanf("%d", &val);

    newNode -> data = val;
    newNode -> next = NULL;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
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

void deleteb() {
    temp = head;
    head = head -> next;
    printf("\nNode removed is : %d", temp -> data);
    free(temp);
}

void deleteend() {
    temp = head;
    while (temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    printf("\nElement removed is : %d", temp -> next -> data); 
    temp -> next = NULL;
      
}

void deletep() {
    int pos;
    struct Node *tail;
    if(pos == 1) {
        deleteb();
    }
    
    temp = head;
    printf("\nEnter the position to delete : ");
    scanf("%d", &pos);
    
    for (int i = 1; i < pos - 1; i++) {
        temp = temp -> next;
    }
    tail = temp -> next;
    temp -> next = temp -> next -> next;
    tail -> next = NULL;

    free(tail);
}

int main() {
    int ch;
    while(1) {
        printf("\n---- Linked List Operations ----\n");
        printf("\n-Operations-\n");
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete at beginning\n5. Delete at end\n6. Delete at position\n7. Display\n8. Exit\n");
        printf("\nSelect an operation : ");
        scanf("%d",&ch);
        switch(ch) {
            case 1: insertb(); break;
            case 2: insertend(); break;
            case 3: insertp(); break;
            case 4: deleteb(); break;
            case 5: deleteend(); break;
            case 6: deletep(); break;
            case 7: display(); break;
            case 8: printf("\nExiting...."); return 0;
            default: printf("\nInvalid choice! Try again!\n");
        }
    }
}