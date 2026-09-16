#include<stdio.h>
struct Node {
    int data; 
    struct Node *next;
}
struct Node *head = NULL;
struct Node *temp = NULL;
struct Node *newNode = NULL;
void insertb(){
    int val; 
  
    newNode = malloc(sizeof(struct Node));
  
    printf("Enter the value : "); 
    scanf("%d", &val)
  
    newNode -> data = val; 
    newNode -> next = head; 
  
    head = newNode; 
} 

insertend() {
    int val;

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

void deleteb() {
    temp = head;
    head = head -> next;
    printf("\nNode removed is : %d", temp -> data)
    free(temp);
}

void deleteend() {
    int node;
    temp = head;
    while (temp -> next -> next != NULL) {
        temp = temp -> next;
    }
    node = temp -> next;
    temp -> next = NULL;
    printf("\nElement removed is : ", node); 
    free(node);
      
}

void deleteb() {
    temp = head;
    head = temp -> next;
    
    temp -> next = NULL;
    free(temp);
} 

void deletep() {
    int pos, node;

    if(pos == 1) {
        deleteb();
    }
    
    temp = head;
    printf("\nEnter the position to delete : ");
    scanf("%d", &pos);
    
    for (int i = 1; i < pos - 1; i++) {
        temp = temp -> next;
    }
    node = temp -> next;
    temp -> next = node;
    node -> next = NULL;
    
    free(node);
}