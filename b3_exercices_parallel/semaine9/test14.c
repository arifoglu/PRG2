#include <stdio.h>
#include <string.h>

/*
#define
preprocesseur direktifidir. Derleme öncesinde çalışır
Bellekte gerçek bir değişken oluşturmaz.
Tipi yoktur, bu yüzden derleyici tip kontrolü yapmaz.

=> Bunlar sadece bir sözcük değişimi gibi çalışır:
=> Kodda PI yazdığında, preprocessor onu 3.14159 ile değiştirir.

*/
#define PI 3.14159
#define MAX_SIZE 100


/*
const
=> Gerçek bir değişken tanımlar ama sadece okunabilir (immutable)
=> Bir tipi vardır (int, char, float, vs.)
=> Bir adres alır → bu yüzden ona pointer gösterebilirsin.
=> Derleyici, bu değişkenin değiştirilip değiştirilmediğini kontrol eder.
*/
const int n = 10;
const char lettre = 'A';
const unsigned int key = 0xad001000;
const char *name = "John";

int main() {
    /*
    bu assignement lar hatali const degere bunlara atanamaz.
    n = 5;
    strcpy(name,"bad");
    */
    return 0;
}
