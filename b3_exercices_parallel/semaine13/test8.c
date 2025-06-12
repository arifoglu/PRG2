#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *next;
    int data;
}Node;

void push(Node **topNode, int v){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        return;
    }
    n->data = v;
    n->next = *topNode;
    *topNode = n;
}

void pop(Node **topNode){
    if(*topNode == NULL){
        return;
    }
    Node *temp = *topNode;
    *topNode = (*topNode)->next;
    free(temp);
}

int top(Node *topNode){
    if(topNode == NULL){
        return 1;
    }
    return topNode->data;
}

int main() {
    int tab[] = {2, 4, 6, 8};
    Node *stack = NULL;

    for(int i = 0; i < 4;++i){
        push(&stack,tab[i]);
    }
    
    while(stack){
        printf("%d ",top(stack));
        pop(&stack);
    }

    return 0;
}