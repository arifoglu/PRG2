#include <stdio.h>

int res_int;
float res_float;

int main(){
    int a, b;
    float c, d;

    printf("Entrez deux nombres entiers : ");
    scanf("%d %d",&a,&b);
    
    res_int = a + b;
    printf("result addition : %d\n",res_int);
    
    res_int = a - b;
    printf("result soustraction : %d\n",res_int);

    
    // float
    printf("Entrez deux nombres reels : ");
    scanf("%f %f",&c,&d);

    res_float = c + d;
    printf("result addition : %f\n", res_float);

    res_float = c - d;
    printf("result soustraction : %f\n", res_float);



    return 0;
}