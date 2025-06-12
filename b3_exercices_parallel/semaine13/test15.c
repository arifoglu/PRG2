#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


typedef struct Node{
    struct Node *next;
    char data[];
}Node;

void push(Node **topNode , void *v, size_t el_size){
    Node *n = malloc(sizeof(Node) + el_size);
    if(n == NULL){
        return;
    }
    memcpy(n->data, v, el_size );
    n->next = *topNode;
    *topNode = n;
}

void *top(Node *topNode){
    return topNode->data;
}

void pop(Node **topNode){
    if(*topNode == NULL){
        return;
    }
    Node *temp = *topNode;
    *topNode = (*topNode)->next;
    free(temp);
}

void clear(Node **topNode){
    while(*topNode != NULL){
        pop(topNode);
    }
}

bool empty(Node *topNode){
    return topNode == 0;
}

int main () {
    double tab[] = {1., 1., 2., 3., 5., 8. };
    int e;

    Node *pildeInt = NULL;
    Node *piledeDouble = NULL;

    for(int i= 0; i< 6;++i){
        e = (int)tab[i];
        push(&pildeInt, &e, sizeof(int));
        push(&piledeDouble, tab + i, sizeof(double));
    }

    while(!empty(pildeInt)){
        printf("%d ", *(int *)top(pildeInt));
        pop(&pildeInt);
    }

    printf("\n");
    
    while(!empty(piledeDouble)){
        printf("%.1f ",*(double *)top(piledeDouble));
        pop(&piledeDouble);
    }

    clear(&pildeInt);
    clear(&piledeDouble);

    return 0;
}