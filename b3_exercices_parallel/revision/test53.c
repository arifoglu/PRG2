#include <stdio.h>

void *top_of_stack(void *this){
    StackData *stack = (StackData*)this;
    if(this == NULL)return NULL;
    return stack->topNode->topNode;
}

int main () {


    return 0;   
}

