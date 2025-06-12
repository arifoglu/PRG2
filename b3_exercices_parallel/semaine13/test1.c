#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next; // Sonraki elemani gosterir
    int data;         // Node un tuttugu veri (burda int)  
}Node;

void push(Node **topNode, int v){
    Node *n = malloc(sizeof(Node)); // yeni node olustur
    if(n == NULL){
        printf("Error allocation!\n");
        return;
    }
    n->data = v;            // yeni Node n e veri atama
    n->next = *topNode;     // yeni Node next i su anki topNode
    *topNode = n;           // topNode artik yeni Node n
}

int main() {
    Node *stack = NULL;     // stack bos 

    push(&stack,10);        // ilk eleman
    push(&stack,20);        // simdi en ustteki eleman bu

    if(stack != NULL){
        printf("En ustteki eleman : %d\n",stack->data);
    }else{
        printf("stack bos\n");
    }

    return 0;
}