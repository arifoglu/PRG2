/*
- TypeTableau CreationTableau(int n)    ;qui crée un tableau de n éléments
- void DestructionTableau(TypeTableau T);qui libère la mémoire occupée par un tableau
- void SimpleLectureTableau(TypeTableau T);qui lit les éléments d’un tableau au
  clavier
- void Affichage(TypeTableau T);qui aﬃche le contenu d’un tableau
- TypeTableau DoubleTableau(TypeTableau T);qui crée un nouveau tableau de même taille que T mais dont les éléments sont ledouble des éléments de T.
*/
#include <stdio.h>

typedef struct{
    int nb_elem;
    int *tab;
}TypeTableau;

// creation
TypeTableau CreationTableau(int n);
// destruction
void DestructionTableau(TypeTableau T);
// lecture
void SimpleLectureTableau(TypeTableau T);
// affiche
void Affichage(TypeTableau T);
//double
TypeTableau DoubleTableau(TypeTableau T);

int main() {

    return 0;
}

TypeTableau CreationTableau(int n){
    TypeTableau t;
    t.nb_elem = n;
    t.tab = (int *)malloc(n * sizeof(int));
    if(t.tab == NULL){
        printf("Error d'allocation\n");
        t.nb_elem = 0;
    }
    return t;
}

void DestructionTableau(TypeTableau T){
    free(T.tab);
    T.tab = NULL;
    T.nb_elem = 0;
}

void SimpleLectureTableau(TypeTableau T){
    for(int i = 0; i < T.nb_elem;++i){
        printf("T[%d] : ",i);
        scanf("%d",&T.tab[i]);
    }
}

void Affichage(TypeTableau T){
    for(int i = 0; i < T.nb_elem;++i){
        printf("T[%d] : ",T.tab[i]);
    }
    printf("\n");
}

TypeTableau DoubleTableau(TypeTableau T){
    TypeTableau t = CreationTableau(T.nb_elem);
    t.tab = (int *)malloc(T.nb_elem * sizeof(int));
    if(t.tab == NULL){
        printf("Error\n");
        t.nb_elem = 0;
        return t;
    }
    for(int i = 0; i < T.nb_elem;++i){
        t.tab[i] = 2 * T.tab[i];
    }
    return t;
}