#ifndef PILE_H
#define PILE_H

#include <stddef.h>
#include <stdbool.h>

typedef enum return_code { OK, MALLOC_FAILED, INVALID_ARG}err_code;

void *new_stack ();
void free_stack(void *stack);

bool empty_stack(void *stack);

err_code push_in_stack(void *stack,int v);
err_code pop_from_stack(void *stack);

int top_of_stack(void *stack, err_code *ret);
size_t size_of_stack (void *stack);

#endif
