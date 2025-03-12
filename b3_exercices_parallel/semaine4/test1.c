#include <stdio.h>

int main()
{
    int val = 10;
    int *p_val = &val;

    printf("Value of val: %d\n", val);
    
    printf("Address of val: %p\n", (void *)&val);
    printf("Address of val: %p\n", p_val);
    printf("Value pointed to by p_val: %d\n", *p_val);

    *p_val = 20;
    printf("New value of val: %d\n", val);
    printf("Address of val: %p\n", (void *)&val);


    return 0;
}