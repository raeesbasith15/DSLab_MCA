#include <stdio.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *newNode;
struct Node *top = NULL;

void push(int *val) {
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = *val;
    newNode -> next = NULL;

}