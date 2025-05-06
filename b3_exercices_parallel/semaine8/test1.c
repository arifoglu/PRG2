#include <stdio.h>

int main() {
    // & => belirli bitleri kontrol etmek icin kullanilir.
    // her iki bit 1 ise sonuc 1 ,diger tum durumlarda 0
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
    /*
    maske degeri  binary       kontrol pozisyonu
    1             0000 0001    Bit 0
    2             0000 0010    Bit 1  
    4             0000 0100    Bit 2
    8             0000 1000    Bit 3

    //
    
    1             0b00000001   Bit 0 (flag 1)
    2             0b00000010   Bit 1 (flag 2)
    4             0b00000100   Bit 2 (flag 3)
    8             0b00001000   Bit 3 (flag 4)
    16            0b00010000   Bit 4 (flag 5)
    32            0b00100000   Bit 5 (flag 6)
    64            0b01000000   Bit 6 (flag 7)
    128           0b10000000   Bit 7 (flag 8)
    
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