#include <stdio.h>
#include <stdlib.h>

int main(){
    // int => %d 
    int num = 15;
    printf("%d\n",num);

    // char => %c 
    char letter = 'A';
    printf("%c\n",letter);

    // float => %f
    float num2 = 16.56;
    printf("%f\n",num2);

    //
    printf("my first number : %d ,second number : %f , letter : %c  \n",num, num2,letter);

    // 
    printf("This is another number %d \n",23);
    printf("This is another letter %c \n",'L');
    return EXIT_SUCCESS;
}