/*
Écrire une fonction récursive calculant la valeur de la « fonction d’Ackermann » 
A définie pour m>0 et n>0 par :
                            A(m,n) = A(m-1,A(m,n-1))  pour m>0 et n>0
                            A(0,n) = n+1              pour n>0
                            A(m,0) = A(m-1,1)         pour m>0
*/
#include <stdio.h>

int A(int m, int n){
    if(m == 0) return n + 1;
    if(n == 0) return A(m-1,1);
    if(m < 0 || n < 0) return 0;

    return A(m - 1,A(m,n-1));
}

int main(){
    int m, n;
    printf("m : ");
    scanf("%d",&m);
    printf("n : ");
    scanf("%d",&n);

    A(m,n);

    printf("acker (%d %d) = %d\n",m,n,A(m,n));

}