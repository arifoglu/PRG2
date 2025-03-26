#include <stdio.h>

int* allocate(int n){
    int *ptr = (int *)calloc(n ,sizeof(int) );
    if(ptr == NULL){
        printf("Error d'allocation!!");
    }
    return ptr;
}

int main() {
    int n;
    int *tab  = NULL;

    printf("n : ");
    scanf("%d",&n);
    
    tab = allocate(n);
    if (tab == NULL) {
        return 1; 
    }

    free(tab);

    return 0;
}