#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    int bit_change;
    printf("n : ");
    scanf("%d",&n);
    printf("bit : ");
    scanf("%d",&bit_change);

    n = ~n;  
    
    printf("n : %d\n",n);


    return EXIT_SUCCESS;
}