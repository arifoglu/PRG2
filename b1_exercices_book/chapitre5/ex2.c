/*
Calculer la moyenne de notes fournies au clavier avec un dialogue de ce type :
note 1 : 12  note 2 : 15.25  note 3 : 13.5  note 4 : 8.75  note 5 : -1  moyenne de ces 4 notes : 12.37
*/
#include <stdio.h>

int main() {
   int i;
   float note, som, moyenne ;
   i = 1;
   som = 0.0;
   moyenne = 0.0;
   
   while(i > 0){
    printf("note %d : ",i);
    scanf("%f",&note);
    if(note < 0)break;
    som += note;
    moyenne = som / i; 
    ++i;
   }
   printf("Moyenne de ces %d notes %.2f\n", i - 1,moyenne);

    return 0;
}