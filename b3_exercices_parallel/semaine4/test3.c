#include <stdio.h>
#include <stdlib.h>

int main() {
    // dynamic memory allocation
    int *secret = malloc(sizeof(int));
    void *key;

    if (secret == NULL) {printf("Memory allocation failed!\n");return 1; }

    printf("Address of secret: %p, val = %x\n", secret, *secret);
    *secret = 0xf88;
    printf("Address of secret: %p, val = %x\n", secret, *secret);

    key = secret;
    printf("First byte of secret: %x\n", *((char *) key));

    key = (char *)key + 1;
    printf("Updated key address: %p\n", key);
   
    free(secret);

    return 0;
}