#include <stdio.h>

void quotient(int p, int q,int *quot,int *rest);

int main() {
    int p , q;
    int quot;
    int rest;
    
    printf("p : ");
    scanf("%d",&p);
    printf("q : ");
    scanf("%d",&q);

    quotient(p,q,&quot,&rest);

    printf("quotient : %d\n",quot);
    printf("rest     : %d\n",rest);

}

void quotient(int p, int q,int *quot,int *rest){
    *quot = p / q;
    *rest = p % q;
}

