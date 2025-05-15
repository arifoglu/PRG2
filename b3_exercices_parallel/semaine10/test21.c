#include <stdio.h>

#define VAL(name) int name##_var = 10; 

int main() {
    VAL(a)
    VAL(b)
    printf("a_var = %d\n",a_var);
    printf("b_var = %d\n",b_var);

    return 0;
}
