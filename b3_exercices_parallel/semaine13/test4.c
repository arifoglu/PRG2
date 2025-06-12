#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
}Node;


int top(Node *topNode){
    if(topNode == NULL){
        printf("Empty\n");
        return -1;
    }
    return topNode->data;  // Sadece en ustteki elemani okur.
}

int main() {
    Node *stack = NULL;

    printf("%d\n",top(stack));// stack ta eleman olsaydi en usttekini verirdi.
    
    return 0;
}