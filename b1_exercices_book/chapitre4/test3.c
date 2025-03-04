#include <stdio.h>

int main() {
    int s = printf("Hello");
    printf("\nTotal caracter: %d\n",s);
    
    // \n  
    int s2 = printf("Hello\n");
    printf("Total caracter: %d\n",s2);
    return 0;
}