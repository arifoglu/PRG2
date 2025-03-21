#include <stdio.h>
#include <stdlib.h>

float* tablo(int *add){
    int n, i;
    float *tab;
    printf("Taille du tablo : ");
    scanf("%d",&n);
    *add = n;
    tab = (float *)malloc(n*sizeof(float));
}

int main() {
    int nb;
    float *tab;
    tab = tablo(&nb);
    
    return EXIT_SUCCESS;
}