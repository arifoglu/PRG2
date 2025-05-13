#include <stdio.h>

#define MAXLEN 5

int main() {
    char buffer[MAXLEN];
    int i;

    /*
    -> stdout genelde tamponludur.
    -> printf(), putchar() önce veriyi buffer’a yazar.buffer
    
    #setvbuf() => stdout için tampon belleği tanımlanir.buffer
    EX: buffer adlı belleği kullan.
        buffer modu: _IOFBF (buffer tamamen dolunca boşalt).
        buffer boyutu: MAXLEN (5 byte).
    */
    setvbuf(stdout, buffer, _IOFBF, MAXLEN);
    //stdout artık tamponlu (buffered).
    //Sadece 5 karakter buffer’a sığar.Buffer dolunca otomatik ekrana yazılır

    //Bu, her seferinde ekrana bir harf yazıyor.(ABCDEFGHIJ)
    for(i = 0;  i < 3 ;i++){
        putchar('A' + i);
    }

    #if 1
        fflush(stdout); // Bu satır buffer’ı zorla temizler ve ekrana bastırır.
    #endif
        while(1);

    return 0;
}