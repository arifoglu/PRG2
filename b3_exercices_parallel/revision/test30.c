#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char a;
    int x;
}normalstruct;

#pragma pack(2)
typedef struct{
    char a;
    int x;
}pragmastruct;
#pragma pack()

int main() {
    printf("Boyut : %lu\n",sizeof(normalstruct));
    printf("Boyut : %lu\n",sizeof(pragmastruct));



    return 0;
}
