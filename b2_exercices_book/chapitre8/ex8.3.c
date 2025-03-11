#include <stdio.h>



int main() {
    char c, q;
    int A, B, total = 0;
    double result;

    while(q != 'N'){
        printf("Votation pour A (tapez A) ou B (tapez B) : ");
        scanf("%c",&c);
        fflush(stdin);

        if(c == 'A'){
            ++A;
        }else if(c == 'B'){
            ++B;
        }
        total += A + B;
 
        printf("Voulez-vous continuez Oui/Non (O / N) : ");
        scanf("%c",&q);
        fflush(stdin);
        if(q == 'N')break;
        if(q == 'O')continue;
    }
    if(A > B){
        result =(double) (A / total);
    }    

    return 0;
}