#include <stdio.h>

int main() {
    // XOR, basit şifreleme algoritmalarında kullanılır çünkü tersine çevrilebilir.
    
    int a = 5; // 0101
    int b = 3; // 0011

    printf("Avant l'échange : a = %d, b = %d\n", a, b);
    // ^ => XOR
    a = a ^ b; // 0101 ^ 0011 => 0110 => a = 6 
    b = a ^ b; // 0110 ^ 0011 => 0101 => b = 5;
    a = a ^ b; // 0110 ^ 0101 => 0011 => a = 3;
    printf("Avant l'échange : a = %d, b = %d\n", a, b);
    return 0;
} 