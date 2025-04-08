#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
    char texte[132];
    int count = 0;
    printf("Text: ");
    // tum satiri almak icin fgets()
    fgets(texte,sizeof(texte),stdin); 
    
    // ilk nokta icin poiinter atama
    char *ptr = texte;

    // aranan caracter varsa count artar ,pointer bir ilerler
    while((ptr = strchr(ptr,'e')) != NULL){
        count++;
        ptr++;
    }
    printf("Total number of 'e' : %d\n",count);


    return 0;
}