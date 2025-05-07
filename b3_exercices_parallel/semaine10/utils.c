#include <stdio.h>
#include "utils.h"

int shared_counter = 0;

static void internal_log(const char *msg){
    printf("[LOG] %s\n",msg);
}

void print_counter(void){
    internal_log("print_counter called");
    printf("shared_counter = %d\n", shared_counter);
}