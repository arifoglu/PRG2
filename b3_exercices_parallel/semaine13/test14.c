#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    struct Node *next;
    int data;
}Node;

typedef struct StackData {
    Node *topNode;
    size_t size;
}StackData;

typedef enum return_code {
    OK,
    MALLOC_FAILED,
    INVALID_ARG
}err_code;

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

void *new_stack(){
    struct StackData *s = malloc(sizeof(struct StackData));
    assert(s != NULL);
    s->topNode = NULL;
    s->size = 0;
    return s;
}

bool empty_stack(void *this){
    StackData *stack = (StackData *)this;
    return stack->size == 0;
}

void clear(Node **topNode){
    while(*topNode){
        Node *temp = *topNode;
        *topNode = temp->next;
        free(temp);
    }
}

err_code push_in_stack(void *this, int v){
    struct StackData *stack = (struct StackData *)this;
    struct Node *old = stack->topNode;

    push(&stack->topNode,v);

    if(old == stack->topNode){
        return MALLOC_FAILED;
    }

    stack->size += 1;
    
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



int top_of_stack(void *this, err_code *ret){
    if(empty_stack(this)){
        if(ret){
            *ret = INVALID_ARG;
        }
        return 0;
    }
    if(ret){
        *ret = OK;
    }
    return top(((struct StackData*)this)->topNode);
}

void free_stack(void *this){
    if(this){
        clear(&((struct StackData *)this)->topNode);
    }
    free(this);
}

int main() {
    void *s = new_stack();
    push_in_stack(s,42);

    err_code r;
    int val = top_of_stack(s,&r);

    if(r == OK){
        printf("top value : %d\n",val);
    }else{
        printf("stack is empty\n");
    }

    pop_from_stack(s);
    val = top_of_stack(s, &r);
    if(r == OK){
        printf("Top after po : %d\n",val);
    }
    free_stack(s);

    return 0;
}