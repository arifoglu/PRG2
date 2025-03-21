#include <stdio.h>
#include <stdlib.h>

int main() {   
    int *students = NULL;                             //pointer for memory allocation                    
    int num_students = 3;                                  
    students = calloc(num_students,sizeof(*students));// memory allocation for 3 students
    if(students == NULL){
        printf("Error !!");
        return EXIT_FAILURE;
    }
    printf("address : %p,\n",students);
    printf("students[0] : %d\n",*(students));    // 0
    printf("students[1] : %d\n",*(students + 1));// 0
    printf("students[2] : %d\n",*(students + 2));// 0

    printf("students[3] : %d\n",*(students + 3));// indefined

    free(students);
    return 0;
}
