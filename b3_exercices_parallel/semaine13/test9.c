/*
Egzersiz 2 – Toplam hesaplama
10 rastgele sayı üret, hepsini yığına push et.
Yığın boşalana dek pop yaparken her elemanı topla.
Toplamı ekrana yazdır ve yığının sonunda gerçekten boş olduğunu doğrula (top() hata değeri döndürmeli).
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

    for(int i = 1; i <= 10;++i){
        int r = (rand() % 100);
        printf("No[%d] = %d\n",i,r);

        push(&stack,r);
    }

    int sum = 0;

    while(stack != NULL){
        int x = top(stack);
        sum += x;
        pop(&stack);
    }
    printf("Sum : %d\n",sum);
    return 0;
}