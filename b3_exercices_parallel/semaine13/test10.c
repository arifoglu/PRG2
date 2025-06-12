/*
10 rastgele sayı üret, yığına push et.
Yığın boşalana kadar:
pop yaparak elemanları kontrol et.
En büyük olanı max değişkeninde sakla.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        return -1;
    }
    return topNode->data;
}

int main() {
    srand(time(NULL));
    Node *stack = NULL;

    for(int i = 0 ; i < 10;++i){
        int r = rand() % 100;
        printf("No[%d] = %d\n",i,r);
        push(&stack,r);
    }
   
    int max = 0;
    while(stack != NULL){
        int x = top(stack);
        if(x > max){
            max = x;
        }
        pop(&stack);
    }
    printf("Max : %d\n",max);

    return 0;
}