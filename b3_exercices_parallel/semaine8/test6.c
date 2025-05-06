#include <stdio.h>

int main() {
    /*
    maske su amaclar icin kullanilir:
    1. bit kontrolu
    2. bit ayarlama  (1 yapmak)
    3. bit sifirlama (0 yapmak)
    4. bit degisimi  (1 <=> 0)
    */

    unsigned char data = 0b10101111;  // uzerinde islem yapacagimiz sayi
    unsigned char mask = 0b00001111; // hangi bitlere etki edecegimizi belirleyen sayi(4.bit etki etmek icin)

    // & operatoru ile istedigimiz bitleri izole ettik ,diger bitler 0 oldu.
    unsigned char result = data & mask; //0b00001111

    // istedigimiz bitlere (burda bit0 ,bit1 ,bit2. bit3 ) etki edecek 
    result = data | mask;

    //////////////////////////

    unsigned char datax = 0b11111111; // hepsi acik
    unsigned char maskx = 0b00001100;// bit2 bit3 kapatmak istiyoruz

    datax = datax & ~maskx; // 0b11110011 => bit2 bit3 kapandi 

    // EXAMPLE
    /*
       1. maske  ile istedigimiz bitler belirlenecek. (bit2 => 1, bit3 => 1 ) 
       2. ~maske ile istedigimiz bitler 0 yapilacak.
       3. num & ~maske ile istedimiz alan 0 oldu.     (bit2 => 0, bit 3 = 0)
       4. bit2 ve bit3 e sayi yerlestirmek icin kaydirma yapiyoruz. new_val << 2
       */
    
    unsigned int num = 0b10101010;

    unsigned int msk = 0b00001100;

    num &= ~msk;

    unsigned int new_val = 0b10;
    num |= (new_val << 2);  
    
    /*
    izole     => data &= mask
    sifirlama => data &= ~mask
    degistirme=> data |= mask
    kontrol   => data & (1 << n)
    */
    return 0;
} 