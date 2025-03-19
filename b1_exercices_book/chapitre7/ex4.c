#include <stdio.h>

#define TAILLE 5

void calcul(double t1[], double t2[],double som[],int size);

int main() {
    double t1[TAILLE];
    double t2[TAILLE];
    double t3[TAILLE];
    
    for(int i = 0; i < TAILLE;++i){
        printf("t1[%d] : ",i);
        scanf("%lf",&t1[i]);
    }
    for(int i = 0; i < TAILLE;++i){
        printf("t2[%d] : ",i);
        scanf("%lf",&t2[i]);
    }
    calcul(t1,t2,t3,TAILLE);
    for(int i = 0; i < TAILLE;++i){
        if(i == 0)printf("som []= {");
        if(i != 0)printf(",");
        printf("%.1f",t3[i]);
        if(i == TAILLE - 1)printf("}");

    }

    return 0;
}
void calcul(double t1[], double t2[],double som[],int size){
    for(int i = 0; i < size;++i){
        som[i] = t1[i] + t2[i];
    }
}
