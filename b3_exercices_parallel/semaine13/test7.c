#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *next;
    int data ;
}Node;

void push(Node **topNode,int v){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        printf("Allocation echoué\n");
        return;
    }
    n->data = v;
    n->next = *topNode;
    *topNode  = n;
}

void pop(Node **topNode){
    if(*topNode == NULL){
        printf("Empty\n");
        return;
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
    int tab[] = {1, 3, 5, 7, 11};
    Node *stack = NULL;

    for(int i = 0; i < 5;++i){
        Node *old = stack;
        push(&stack,tab[i]);
        if(old == stack){
            printf("Echec du push\n");
            exit(-1);
        }
    }

    while(stack){
        printf("%d ",top(stack));
        pop(&stack);
    }

    return 0;
}