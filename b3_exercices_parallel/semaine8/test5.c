#include <stdio.h>

int main() {
    /*
    Sola kaydırma (<<): Sayıyı 2'nin kuvvetleriyle çarpmaya eşdeğerdir. Örneğin, 3 << 2 = 3 * 2^2 = 12
    */
    // << bit sola kaydirma
    unsigned int a = 3;       // 0011
    unsigned int b = a << 2;  // 1100
    printf("%d\n",b);

    /*
    Sağa kaydırma (>>): Sayıyı 2'nin kuvvetlerine bölmeye eşdeğerdir. Örneğin, 16 >> 2 = 16 / 2^2 = 4
    */
    // >> bit saga kaydirma
    unsigned int c = 16;       // 10000
    unsigned int d = c >> 2;  //  00100
    printf("%d\n",d);
    
    // EXAMPLES
    
    return 0;
} 