#include <stdio.h>
#include <stdlib.h>

int main() {
    // static array
    int arr[5] = {1,2,3,4,5};
    char str[6] = "Hello";
    // acces 
    printf("%d\n",arr[0]);
    printf("%s\n",str);

    // dynamic array
    int *tab;
    tab = (int *)malloc(5 * sizeof(*tab)); // 5 elemanli dynamic array (icerik indetermine)
    if(tab == NULL){printf("Error!!\n");exit(EXIT_FAILURE);}
    for(int i = 0; i < 5;++i){
        //tab[i] *= 2;
        printf("%d",tab[i]);
    }
    printf("\n");
    free(tab);

    return 0;
}