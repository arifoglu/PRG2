#include <stdio.h>
#include <stdlib.h>

struct element{
    int num;
    struct element *suivant;
};

int main(){  
    struct element *debut = NULL;   // baslangic noktasi
    struct element *courant = NULL; // gecici pointer
    int num;

    while(1){
        if(scanf("%d",&num) != 1 || num == 0)break;

        struct element *nouveau = (struct element*)malloc(sizeof(struct element));
        
        nouveau->num = num;
        nouveau->suivant = NULL;

        if(debut == NULL){
            debut = nouveau;
        }else{
            courant->suivant = nouveau;
        }
        courant = nouveau;
    }
    printf("\n");
    
}
