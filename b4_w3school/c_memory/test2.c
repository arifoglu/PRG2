#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr ;
    ptr = calloc(4,sizeof(*ptr));

    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    printf("%d\n",*ptr);
    printf("%d %d %d %d\n",ptr[0],ptr[1],ptr[2],ptr[3]);
    
    // bellek asimi normalde 4 tane yer ayrildi ve ici 0 larla dolduruldu.
    // ptr[4],ptr[5] undefined durumda
    //printf("%d %d %d %d %d %d\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5]);

    return 0;
}