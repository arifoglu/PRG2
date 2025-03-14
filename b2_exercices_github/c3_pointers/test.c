#include<stdio.h>

// --- to be completed
// needed declaration
void swap(int * , int *);
// --- end completion
int main() {
    int n1, n2;

    printf("Function : swap two numbers\n");
    printf("---------------------------\n");
    printf("Input 1st number : ");
    scanf("%d", &n1);
    printf("Input 2nd number : ");
    scanf("%d", &n2);

    printf("Before swapping: n1 = %d, n2 = %d ", n1, n2);

    // --- to be completed
    // call swap()
    swap(&n1,&n2);
    // --- end completion

    printf("\nAfter swapping: n1 = %d, n2 = %d \n", n1, n2);
    return 0;
}

// --- to be completed
// swap() function

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}











// --- end completion
