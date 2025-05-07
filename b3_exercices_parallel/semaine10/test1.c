#include <stdio.h>

#define MESSAGE "HELLO"

/*
-burda eger compile zamaninda bu sekilde cagirilirsa => gcc test1.c -DDISPLAY 
-o zaman EXTRA ifades BONJOUR ile degisecek.asm
-yani sadece compile ile aktif olmasini isteyecegimiz yapiyi bu sekilde yapiyoruz.
*/
#ifdef DISPLAY
    #define EXTRA "BONJOUR"
#endif

int main() {
    printf("%s\n",MESSAGE);

    #ifdef DISPLAY
        printf("%s\n",EXTRA);
    #endif

    return 0;
}