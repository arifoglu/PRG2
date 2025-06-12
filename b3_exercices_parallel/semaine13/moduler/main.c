#include <stdio.h>
#include "pile.h"

int main() {
    void *stack = new_stack();

    push_in_stack(stack,10);
    push_in_stack(stack,20);
    push_in_stack(stack,30);

    err_code r;
    int val = top_of_stack(stack, &r);

    if(r == OK){
        printf("top val : %d\n",val);
    }

    pop_from_stack(stack);
    
    val = top_of_stack(stack, &r);

    if(r == OK){
        printf("After pop : %d\n",val);
    }

    printf("Stack empty ? %s\n", empty_stack(stack) ? "YES" : "NO");

    printf("stack size :%zu\n",size_of_stack(stack));

    free_stack(stack);
}