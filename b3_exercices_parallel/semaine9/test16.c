#include <stdio.h>

int main() {
    int num = 20;
    const int *ptr1 = &num;
    int *ptr2;

    const int value = 100;
    const int * const constptr = &value;

    // conversion const ptr1 den nonconst ptr2
    ptr2 = (int *)ptr1;
    // modify 
    *ptr2 = 30;

    /////////////
    // conversion const int* constptr den nonconst int*
    int *mutableptr = (int *)constptr;
    *mutableptr = 200;


    return 0;
}
