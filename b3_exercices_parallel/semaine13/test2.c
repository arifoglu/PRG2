#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
}Node;

void pop(Node **topNode){
    if(*topNode == NULL){
        printf("Stack is empty\n");
        return;
    }
    Node *temp = *topNode;          // en ust dugumu gecici tutar
    *topNode = (*topNode)->next;    // en ust alt dugume gecer
    free(temp);                     // onceki dugum serbest
}

int main() {


    return 0;
}