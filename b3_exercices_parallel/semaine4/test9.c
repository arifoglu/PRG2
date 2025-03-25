#include <stdio.h>
#include <stdlib.h>

void display1(int tab[]){
    for(int i = 0; i < 3;++i){
        printf("%d ",tab[i]);
    }
    printf("\n");
}

// pointer ile kullanimi
void display2(int *tab){
    for(int i = 0; i < 3;++i){
        printf("%d ",*(tab+i));
    }
    printf("\n");
}
int main() {
    int tab[] = {10,20,30};

    //C’de array değer olarak değil, referans (adres) olarak fonksiyonlara geçirilir.
    //tab zaten bir pointer olduğu için fonksiyona int tab[] şeklinde geçirilir.
    display1(tab);

    // pointer ile kullanimi
    display2(tab);

    return 0;
}