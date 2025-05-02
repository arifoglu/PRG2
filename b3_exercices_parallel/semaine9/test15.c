#include <stdio.h>
#include <string.h>

int x = 10;
const int *ptr = &x;       // deger const  ,adres degisir

int * const ptr2 = &x;     // deger degisir, adres const

const int * const ptr3 = &x;// deger const, adres const 

int main() {
    int y ;
    /*
    ptr  => bu bir adres ve degisebilir (&y verilebilir)
    *ptr => const int deger ve degismez
    *ptr = 100; => hatali
    */
    ptr = &y;

    /*
    ptr2  => bu bir const ptr2 oldugu icin adresi degismez 
    ptr2 = &y; => hatali

    *ptr2 => degeri degisebilir. 
    */
    *ptr2 = 200;

    /*
    ptr3  => const ptr3 adres degismez
    ptr3 = &y => hatali

    *ptr3 => deger const degismez
    *ptr => 345 => hatali
   
    */

    return 0;
}
