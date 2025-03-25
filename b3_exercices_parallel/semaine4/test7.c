#include <stdio.h>
#include <stdlib.h>

int main() {
    //multidimensional array

    // static
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    printf("%d\n",matrix[1][2]); // 6

    // pointer
    int (*ptr)[3] = matrix;
    printf("%d\n",ptr[1][2]); // 6

    // dynamic 
    int **tab;
    tab = (int *)malloc(2 * sizeof(*tab));                  // 2 satir dynamic allocation
    if(tab == NULL ){printf("Error\n");exit(EXIT_FAILURE);}
    for(int i = 0; i < 2;++i){
        tab[i] = (int *)malloc(3 * sizeof(*tab));           // 3 colon dynamic allocation
        if(tab[i] == NULL ){printf("Error\n");exit(EXIT_FAILURE);} 
    }
    
    for(int i = 0; i< 2;++i){
        free(tab[i]);
    }
    free(tab);

    return 0;
}