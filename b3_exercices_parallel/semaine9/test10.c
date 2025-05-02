#include <stdio.h>
#include <string.h>

/*
=> union ayni memory alanini paylasarak kullanir.
ornekte 
-once 
=> d.i = 4 olur, printf ile yazdirilir
sonra d.i alani 0 olur,
=> d.f = 5.6 olur, printf ile yazdirilir
sonra d.f alani 0 olur,
=> d.cahine = news olur, printf ile yazdirilir

*** union'da sadece bir üye aktif olabilir, çünkü tüm üyeler aynı bellek alanını kullanır.

*/
union Donnees {
    int i;
    float f;
    char *chaine;
};

int main() {
    union Donnees d;
    
    d.i = 4;
    printf("int    : %d\n",d.i);

    d.f = 5.6;
    printf("float  : %.1f\n",d.f);

    d.chaine = "news";
    printf("chaine : %s\n",d.chaine);

    return 0;
}