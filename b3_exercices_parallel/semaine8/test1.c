#include <stdio.h>

int main() {
    // & => belirli bitleri kontrol etmek icin kullanilir.
    unsigned int nbr = 15;
    /*
    15   => 0000 1111 (binary)
    1    => 0000 0001 (binary)
    true => 0000 0001 
    */
    if(nbr & 1){
        printf("%d est impair\n",nbr);
    }else{
        printf("%d est pair\n",nbr);
    }
    ///////////////////// 
    /*
    // 1.bit kontrol 0b00000001
    // 2.bit kontrol 0b00000010
    // 3.bit kontrol 0b00000100
    // 4.bit kontrol 0b00001000
    // 5.bit kontrol 0b00010000
    // 6.bit kontrol 0b00100000
    // 7.bit kontrol 0b01000000
    // 8.bit kontrol 0b10000000
    */
    unsigned char statut = 0b10111010;
    unsigned char masque = 0b00000100;
    //Masque, kontrol etmek istenilen bit => 1  diğer bitler => 0 
    
    if(statut & masque){
        printf("Le 3eme flag est actif.\n");
    }else{
        printf("Le 3eme flag est inactif.\n");
    }

    return 0;
} 