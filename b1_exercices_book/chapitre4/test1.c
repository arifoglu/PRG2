#include <stdio.h>

int main() {
    // min 3 int
    int n = 2,m = 20,k = 200,l = 2000;
    printf("%3d\n",n);
    printf("%3d\n",m);
    printf("%3d\n",k);
    printf("%3d\n",l);

    // gabarit par defaut && apres virgule 6 chiffres
    float x = 1.2345, y = 12.345;
    printf("%f\n", x);
    printf("%f\n", y);

    // gabarit min 10 ,&& apres virgule 6 chiffres
    float q = 1.2345;
    printf("%10f\n", x);   //gabarit 10 apres virgule 6 chiffres
    printf("%10.2f\n", x); //gabarit 10 apres virgule 2 chiffres

    // gabarit par defaut ,&& apres virgule 6 chiffres
    float t = 1.2345, r = 123.45;
    printf("%e\n",t);
    printf("%e\n",r);
    return 0;
}