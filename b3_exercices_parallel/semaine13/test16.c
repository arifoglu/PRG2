#include <stdio.h>

typedef struct tableau_taile_fixe {
    int data[3];
}array_int_3;

array_int_3 somme(array_int_3 a, array_int_3 b){
    array_int_3 c;
    for(int i = 0; i < sizeof(array_int_3) / sizeof(int);++i){
        c.data[i] = a.data[i] + b.data[i];
    }
    return c;
}

int main () {
    array_int_3 a = {2, 3, 7};
    array_int_3 b = {4, 2, 1};
    array_int_3 c = somme(a,b);

    for(int i = 0; i < sizeof(array_int_3) / sizeof(int);++i){
        printf("%d ",c.data[i]);
    }
    return 0;   
}

