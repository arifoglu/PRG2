#include <stdlib.h>
#include <assert.h>
#include "pile.h"

typedef struct Node{
    struct Node *next;
    int data;
}Node;

typedef struct StackData {
    Node *topNode;
    size_t size;
}StackData;

void *new_stack(){
    struct StackData *s = malloc(sizeof(struct StackData));
    assert(s != NULL);
    s->topNode = NULL;
    s->size = 0;
    return s;
}

bool empty_stack(void *stack){
    return ((StackData*)stack)->size == 0;
}

void push(Node **topNode, int v){
    Node *n = malloc(sizeof(Node));
    if(n == NULL){
        return;
    }
    n->data = v;
    n->next = *topNode;
    *topNode = n;
}

int top(Node *topNode){
    return topNode->data;
}

int top_of_stack(void *stack, err_code *ret){
    if(empty_stack(stack)){
        if(ret){
            *ret = INVALID_ARG;
        }
        return 0;
    }
    if(ret){
        *ret = OK;
    }
    return top(((struct StackData *)stack)->topNode ->data);
}

err_code push_in_stack(void *stack, int v){
    StackData *s = (StackData *)stack;
    Node *old = s->topNode;
    
    push(&s->topNode,v);

    if(old == s->topNode){
        return MALLOC_FAILED;
    }
    s->size += 1;
    return OK;
}


err_code pop_from_stack(void *this){
    StackData *stack = (StackData *)this;
    if(empty_stack(this)){
        return INVALID_ARG;
    }
    Node *temp = stack->topNode;
    stack->topNode = temp->next;
    free(temp);
    stack->size -= 1;
    return OK;
}

static void clear(Node **topNode) {
    while (*topNode) {
        Node *tmp = *topNode;
        *topNode = tmp->next;
        free(tmp);
    }
}

void free_stack(void *stack){
    StackData *s = (StackData *)stack;
    clear(&s->topNode);
    free(s);
}