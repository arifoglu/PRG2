#include <stdio.h>
/*
gcc test4.c -DLANG_TR ile derlenirse => Merhaba!
gcc test4.c -DLANG_EN ile derlenirse => Hello! 
*/
#ifdef LANG_TR
    #define LANGUAGE "Merhaba!"
#endif

#ifdef LANG_EN
    #define LANGUAGE "Hello!"
#endif

int main() {
    #ifdef LANG_TR
        printf("%s\n",LANGUAGE);
    #endif
    #ifdef LANG_EN
        printf("%s\n",LANGUAGE);
    #endif

    return 0;
}
