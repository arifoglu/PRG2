#include <stdio.h>
#include <stdlib.h>

int main(){
    // int => %d || %i
    int num = 34;
    printf("%i\n",num);

    // float => %f || %F
    float num2 = 3.16;
    printf("%f\n",num2);
    
    // double => %lf 
    double num3 = 3.16;
    printf("%lf\n",num3);

    // char => %c
    char letter = 'A';
    printf("%c\n",letter);

    // string => %s
    char str[] = "hello";
    printf("%s\n",str);

    //
    char c = 65;
    printf("%c\n",c);
    return EXIT_SUCCESS;
}