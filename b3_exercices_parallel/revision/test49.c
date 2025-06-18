#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *next;
    int data;
}Node;

void push(Node **topNode, int v){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        printf("Empty\n!");
        return ;
    }
    n->data = v;
    n->next = *topNode;
    *topNode = n;
}

void pop(Node **topNode){
    if(*topNode == NULL){
        printf("Empty\n");
        return ;
    }
    Node *temp = *topNode;
    *topNode = (*topNode)->next;
    free(temp);
}

int top(Node *topNode){
    if(topNode == NULL){
        return -1;
    }
    return topNode->data;
}

void clear(Node **topNode){
    while(*topNode != NULL){
        pop(topNode);
    }
}


int main() {
    Node *stack = NULL;

    // 3 element ekledik
    push(&stack,10);        
    push(&stack,20);
    push(&stack,30);

    // en usttekini yazdik
    printf("Top %d\n",top(stack));

    // en usttekini cikardik
    pop(&stack);

    // en usttekini yazdik
    printf("Top %d\n",top(stack));

    // tum stack temizlendi
    clear(&stack);

    // stack bos hali
    printf("Top(after clear) %d\n",top(stack));

    return 0;
}