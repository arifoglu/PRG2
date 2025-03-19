#include <stdio.h>

#define NB_MAX 10

void insertion(int t[], int nb_max, int *n, int i, int m);

int main() {
    int t[NB_MAX] = {1,2,3,4};
    
    int n = 4;
    int i = 2;
    int m = 5;
    
    for(int i = 0; i < n;++i){
        printf("%d",t[i]);
    }
    printf("\n");

    // insertion
    insertion(t,NB_MAX,&n,i,m);
    
    for(int i = 0; i < n;++i){
        printf("%d",t[i]);
    }
    printf("\n");

    return 0;
}
void insertion(int t[],int nb_max, int *n, int pos, int m){
    if(pos < 0 || pos > *n){
        printf("Error!!,position indefined!!!\n");
    }
    if (*n >= nb_max) {
        printf("Error: Array is full!\n");
        return;
    }

    for (int i = *n; i > pos; --i) {
        t[i] = t[i - 1];
    }
    t[pos] = m;
    (*n)++;
    
}
