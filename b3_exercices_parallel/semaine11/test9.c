#include <stdio.h>

/*
->Girişler (stdin veya dosya) önce bir buffer’a gelir.
->fgets() bu buffer’dan veriyi belirli miktarda çeker.
->buffer’daki veri çok fazlaysa, sadece bir kısmı okunur, geri kalanı bufferda kalir
*/
int main() {
    char str[10];
    fgets(str,10,stdin);// (9 caracter + '\0') => alir,diger kisim bufferda kalir
    
    printf("%s\n",str);

    return 0;
}