#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Entrez : ");
    scanf("%d %d %d",&a, &b, &c);

    if(a > b){
        if(a > c){
            max = a;
        }else{
            max = c;
        }
    }else if(b > a){
        if(b > c){
            max = b;
        }else{
            max = c;
        }
    }
    
    printf("Sortie : le maximum est : %d\n",max);

    return 0;
}