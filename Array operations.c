#include <stdio.h>
#define MAX 50

void insert(int arr[], int *size) {
    int n, pos;

    if (*size >= MAX) {
        printf("\n--Array is full--");
        return;
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &n);
    printf("\nEnter the position (1-%d) : ", (*size + 1));
    scanf("%d", &pos);

    if (pos < 1 || pos > *size + 1) {
        printf("\n--Cannot insert there--");
        return;
    }

    for (int i = *size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = n;
    (*size)++;
    printf("\nElement inserted successfully");
}

void delete(int arr[], int *size) {
    int pos;

    if (*size == 0) {
        printf("\n--No elements found--");
        return;
    }

    printf("\nEnter the position to delete (1-%d): ", *size);
    scanf("%d", &pos);

    if (pos < 1 || pos > *size) {
        printf("\n--No elements found--");
        return;
    }

    for (int i = pos - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("\nElement deleted successfully");
}

void display(int arr[], int *size){
    printf("\n--Array--\n");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[MAX], ch, size = 0, loop = 'y';
    while(1){
    printf("\n---- Array Operations ----\n");
    printf("\n-Operations-\n");
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit");
    printf("\nSelect an operation : ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            insert(arr, &size);
            break;
        case 2:
            delete(arr, &size);
            break;
        case 3:
            display(arr, &size);
            break;
        case 4:
            return 0;
        default:
            printf("-Invalid option chosen! Try again-");
            break;
    }
    }
return 0;
}