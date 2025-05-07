#include <stdio.h>


#define MESAJ "STUDY"

/*
compilation zamaninda kullanmak istedigimiz veriyi bu yapida kulanicaz.
#ifdef

#endif
*/
#ifdef MESAJ2
    #define EXTRA "AT SCHOOL!!"
#endif

int main() {
    printf("%s\n",MESAJ);

    // eger compilation da cagirilirsa bu yapi aktif olacak!
    #ifdef MESAJ2
        printf("%s\n",EXTRA);
    #endif 

    return 0;
}
