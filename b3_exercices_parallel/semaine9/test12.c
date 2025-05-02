#include <stdio.h>
#include <string.h>

typedef struct{
    char *a;
    char b;
    int c;
}st1;

typedef struct{
    char *a;
    char b;
    int c;
    char d[6];
}st2;

int main() {
    st1 area1 = {(void *) 0xabcdef1234567890, 'B', 26};
    st2 area2 = {(void *) 0xabcdef1234567890, 'B', 26,{'a','b','c','d','e','f'}};

    printf("sizeof st1 = %zu\n",sizeof(st1));
    printf("sizeof st2 = %zu\n",sizeof(st2));
    return 0;
}