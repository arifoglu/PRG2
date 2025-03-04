/*
Écrire un programme qui aﬃche le chiﬀre des dizaines d’un nombre saisiau clavier. Même question pour les centaines
*/
#include <stdio.h>

int main(){
    int n,chiffres_dizaine,chiffres_centaine;
    scanf("%d",&n);

    if(n > 10){
        chiffres_dizaine = (n / 10) % 10;
        chiffres_centaine = (n / 100) % 10;
        printf("%d\n",chiffres_centaine);
        printf("%d\n",chiffres_dizaine);
    }else{
        printf("!!!Il faut saisir plus superieure 10\n");
    }

    
    return 0;
}