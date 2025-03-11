#include <stdio.h>


int f(){
    static long int n;

    ++n;
    if(n == 1){
        printf("au premier appel : *** appel %ld fois ***\n",n);
    }else if(n == 10){
        printf("au dixième appel : *** appel %ld fois ***\n",n );
    }else if(n == 100){
        printf("au centième appel : *** appel %ld fois ***\n",n );
    }else if(n == 1000){
        printf("au millième appel : *** appel %ld fois ***\n",n );
    }else if(n == 100000){
        printf("au dix millième appel : *** appel %ld fois ***\n",n );
    }

    return 0;
}
int main(){
    for(int i = 0 ;i < 1000;++i) {f();}


}