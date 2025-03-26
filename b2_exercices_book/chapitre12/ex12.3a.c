#include <stdio.h>
#include <stdlib.h>

int* suite(int n){
    int *tab = (int *)calloc(n,sizeof(int));
    if(tab == NULL){
        printf("Error!!");
    }
    tab[0] = 1;
    for(int i = 1; i < n;++i){
        tab[i] = 3 * tab[i - 1] * tab[i - 1] + 2 * tab[i] + 1;
    }
    return tab;
}

int main() {
    int n;
    int *tab = NULL;
    
    printf("n : ");
    scanf("%d",&n);

    tab = suite(n);
    if(tab == NULL){
        printf("Error");
        return 1;
    }
    
    for (int i = 0; i < n; ++i) {
         printf("%d ", tab[i]);
    }
    printf("\n");

    free(tab);
    return 0;
}