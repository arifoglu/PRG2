#include <stdio.h>

int main() {
    unsigned char data = 0;
    unsigned char mask = 0;
    unsigned char result = 0;

    data = 0b10101111;
    mask = 0b00001111;

    result = data & mask;

    data = 0b10100000;
    mask = 0b00001111;

    result = data | mask;
    

    return 0;
} 