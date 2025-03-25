#include <stdio.h>
#include <stdlib.h>

void display(int tab[],int size){
    for(int i = 0; i < size;++i){
        printf("%d ",tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[] = {10,20,30};

    //C’de array değer olarak değil, referans (adres) olarak fonksiyonlara geçirilir.
    //tab zaten bir pointer olduğu için fonksiyona int tab[] şeklinde geçirilir.
    display(tab,3);

    return 0;
}