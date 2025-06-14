#include <stdio.h>
#include <stdlib.h>

// version court
int max(int a, int b, int c){
    return a > c ? (a > b ? a : b) : (b > c ? b : c); 
}
// version court
int min(int a, int b, int c){
    return a < c ? (a < b ? a : b) : (b < c ? b : c);
}

int main () {
    int a, b, c, result;

    printf("Entres : ");
    scanf("%d %d %d",&a, &b, &c);

    if(a > b){
        if(a > c){
            result = a;
        }else{
            result = c;
        }
    }else if(b > a){
        if(b > c){
            result = b;
        }else{
            result = c;
        }
    }

    printf("Sorties : %d\n",result);

    return EXIT_SUCCESS;
}
