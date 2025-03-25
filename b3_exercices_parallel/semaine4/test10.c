#include <stdio.h>
#include <stdlib.h>

void display(int **matrix,int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int rows = 2, cols = 3;
    
    // satirlar icin memory allocation 
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if(matrix == NULL){printf("Error");exit(EXIT_FAILURE);};

    // sutunlar icin memory allocation
    for(int i = 0;i < rows;++i){
        matrix[i] = (int *)malloc(cols * sizeof(int *));
        if(matrix[i] == NULL){printf("Error");exit(EXIT_FAILURE);};
    }

    // arrayi doldur
    int count = 1;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matrix[i][j] = count++;
        }
    }

    display(matrix,rows,cols);

    for(int i = 0; i < rows;++i){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}