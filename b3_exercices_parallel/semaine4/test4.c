#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 45;
    void *p_i = &i;
    void *ptr1 = &p_i;
    void *ptr2 = &ptr1;
    void *ptr3 = &ptr2;

    printf("i    : %d\n",i);
    printf("p_i  : %p\n",p_i);
    printf("ptr1 : %p\n",ptr1);
    printf("ptr2 : %p\n",ptr2);
    printf("ptr3 : %p\n",ptr3);

    // dereferencing
    printf("p_i  : %d\n",*(int *)p_i);
    printf("ptr1 : %d\n",**(int **)ptr1);
    printf("ptr2 : %d\n",***(int ***)ptr2);
    printf("ptr3 : %d\n",****(int ****)ptr3);
    return 0;
}