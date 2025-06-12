#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *next;
    int data;
}Node;

void push(Node **topNode, int v){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        printf("Error d'allocation\n");
        return;
    }
    n->data = v;
    n->next = *topNode;
    *topNode = n;
}


void pop(Node **topNode){
    if(topNode == NULL){
        printf("Empty\n");
        return;
    }
    Node *temp = *topNode;
    *topNode = (*topNode)->next;
    free(temp);
}

int top(Node *topNode){
    if(topNode == NULL){
        printf("Empty\n");
        return 1;
    }
    return topNode->data;
}

int main() {
    Node *stack = NULL;

    push(&stack,50);                // element ekledik 
    push(&stack,100);    
    push(&stack,150);    

    printf("%d\n",top(stack));      // en usttekini aldik yazdirdik 

    pop(&stack);                    // en usttekini cikardik

    printf("%d\n",top(stack));

    return 0;
}