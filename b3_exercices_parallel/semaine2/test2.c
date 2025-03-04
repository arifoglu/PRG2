#include <stdio.h>
#include <stdlib.h>

int main() {
    long cell = 0xf0000c000;
    long adr = 0Xffff1111;

    printf("Hello guys\n");
    printf("Name is :");
    printf("Oscar\n");

    printf("My name is %s\n","Oscar");

    printf("Tempreture is : %d degree\n",23);

    printf("Memory address is %x\n",0xc0004000);

    printf("Value of cell %ld at address %lx\n",cell,adr);
}