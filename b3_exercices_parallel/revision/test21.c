#include <stdio.h>


int main() {
    unsigned char settings = 0b11111111;
    unsigned char mask = (1 << 2) | (1 << 3);// bit2 ve bit3 sectik

    settings &= ~mask;                      // bit2 bit3 sifirlandi

    unsigned char new_val =0b01;            // yeni deger
    settings |= (new_val << 2);             // bit2 bit3 yeni deger aldi

    ////////////////////////////////////////////////////////////////////

    unsigned char val = 0b00001101;
    unsigned char result = ~val;            // tum bitler tersine cevrildi


    ////////////////////////////////////////////////////////////////////
    unsigned char flags = 0b00000101;
    unsigned char mask = (1 << 2);
    flags ^= mask;  // tersleme(toggle)
    

    ////////////////////////////////////////////////////////////////////
    /*
    ----------------------EXAMPLES---------------------------
    unsigned int n ;

    n & (1 << 3)        => CHECK  bit3

    n |= (1 << 3)       => SET    bit3

    n ^= (1 << 3)       => TOGGLE bit3

    n &= ~(1 << 3)      => CLEAR  bit3

    n &= ~(1 << 3)      => CLEAR 
    n |= (0b1010 << 3)  => SET yeni val

    (n >> (8 * i) ) & 0xFF     => getbyte
    */

    

    return 0;
}
