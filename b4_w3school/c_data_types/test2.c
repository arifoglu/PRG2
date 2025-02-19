#include <stdio.h>
#include <stdlib.h>

int main(){

    float num = 3.5;
    // 
    printf("%f\n",num);      //  3.500000
    printf("%.1f\n",num);    //  3.5
    printf("%.2f\n",num);    //  3.50
    printf("%.6f\n",num);    //  3.50
    printf("%.7f\n",num);    //  3.50
    
    // %.f
    printf("%.f\n",num);     //  4   
    return EXIT_SUCCESS;
}