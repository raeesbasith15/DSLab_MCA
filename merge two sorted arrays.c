#include <stdio.h>
int main() {
    int A[10], B[10], C[20];
    printf("Enter the size of first array: ");
    int n1;
    scanf("%d", &n1);
    printf("Enter the elements of first array in sorted order: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the size of second array: ");
    int n2;
    scanf("%d", &n2);
    printf("Enter the elements of second array in sorted order: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if(A[i] < B[j]) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }
    while (i < n1) {
        C[k++] = A[i++];
    }
    while (j < n2) {
        C[k++] = B[j++];
    }
    printf("Merged array: ");
    for(int m = 0; m < k; m++) {
        printf("%d ", C[m]);
    }
    printf("\n");

}