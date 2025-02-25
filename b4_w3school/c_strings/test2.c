#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char gr[] = "Hello World!";
    printf("%lu\n",strlen(gr));     // 12
    printf("%lu\n",sizeof(gr));     // 13

    char gr2[20] = "Hello World!";
    printf("%lu\n",strlen(gr2));     // 12
    printf("%lu\n",sizeof(gr2));     // 20

    return EXIT_SUCCESS;
}