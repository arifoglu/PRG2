/*
=> Önce 7, 14, 21’yi push ile ekle.
=> Sonra 1 kere pop yap.
=> en üstündeki elemanı yazdır.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
}Node;

void push(Node **topNode,int v){
    Node *n = malloc(sizeof(Node));
    if(n != NULL){
        n->data = v;
        n->next = *topNode;
        *topNode = n;
    }
}

void pop(Node **topNode){
    if(*topNode == NULL){
        printf("Stack empty\n");
        return;
    }
    Node *temp = *topNode;
    *topNode = (*topNode)->next;
    free(temp);
}

int main() {
    Node *stack = NULL;

    push(&stack,7);
    push(&stack,14);
    push(&stack,21);

    if(stack != NULL){
        printf("%d\n",stack->data);
    }else{
        printf("Empty\n");
    }

    pop(&stack);

        if(stack != NULL){
        printf("%d\n",stack->data);
    }else{
        printf("Empty\n");
    }
    return 0;
}