/*
-une fonction, nommée f1, se contentant d’afficher "bonjour" (elle ne possèdera
aucunargument ni valeur de retour),

-une fonction, nommée f2, qui affiche "bonjour" un nombre de fois égal à la
valeur reçueen argument (int) et qui ne renvoie aucune valeur

-une fonction, nommée f3, qui fait la même chose que f2, mais qui, de plus,
renvoie la valeur(int) 0
  
Écrire un petit programme appelant successivement chacune de ces trois fonctions, après lesavoir convenablement déclarées sous forme d’un prototype.
*/
#include <stdio.h>

void f1(void);
void f2(int);
int  f3(int);


int main(){
    f1();
    f2(3);
    f3(4);
}

void f1(void){
    printf("bonjour\n");
}
void f2(int n){
    for(int i = 0;i < n;++i){
        printf("bonjour\n");
    }
} 
int f3(int n){
    for(int i = 0;i < n;++i){
        printf("bonjour\n");
    }
    return 0;
}