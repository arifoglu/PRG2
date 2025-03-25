#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    int *tablo = NULL;                       // this pointer isn't using for instant,it's NULL.
    tablo = (int *)malloc(n * sizeof(int));  // 40 byte memory allocation.
    //tablo =        malloc(n * sizeof(int));// 40 byte memory allocation
    free(tablo);

    return 0;
}
