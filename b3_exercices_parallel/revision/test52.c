#include <stdio.h>
#include <assert.h>

#define CAPACITE 10

typedef struct capacite_fixe {
    size_t taille;
    int data[CAPACITE];
}array_int;

// ONEMLI OLAN BU !!!!!
void push_back(array_int *a, int v){
    assert(a->taille < CAPACITE);
    a->data[a->taille++] = v;
}

array_int somme(array_int a, array_int b){
    array_int c = {};
    assert(a.taille == b.taille);
    for(int i = 0; i < a.taille;++i){
        c.data[i] = a.data[i] + b.data[i];
        c.taille++;
    }
    return c;
}

int main () {
    array_int a = {3, {2,3,7}};
    array_int b = {2, {4,2}};
    array_int c;
    
    push_back(&b,1);
    c = somme(a,b);

    for(int i = 0; i < c.taille;++i){
        printf("%d + %d = %d\n",a.data[i], b.data[i], c.data[i]);
    }
    return 0;   
}

