#include <stdio.h>
/*
program sadece bu kod ile cikti uretir => gcc test3.c -DHELLO 
*/
#ifdef HELLO
    #define GREETINGS "Hello, world!"
#endif

int main() {
    #ifdef HELLO
     printf("%s\n",GREETINGS);
    #endif

    return 0;
}
