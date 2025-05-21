#include <stdio.h>

int main() {
    #if LEVEL == 1
     printf("Level 1 - Beginner\n");
    #elif LEVELL == 2
     printf("Level 2 - Intermediate\n");
    #else
     printf("Level unkonown\n");
    #endif
}