#include <stdio.h>

int main() {
    int n = 3;
    double pi = 3.14159;
    printf("%8.*f\n",n,pi);
    printf("%-8.*f\n",n,pi);
    /*
        8, toplam genişliği belirtir.
        *, hassasiyetin n değişkeninden alınacağını söyler.
        -, sola hizalama yapar.n
    */
    return 0;
}