#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(const char *str ){
    char buffer[200];
    strcpy(buffer,str);
    
    size_t len = strlen(str);
    
    int count = 0;
    char *mot = strtok(buffer," ");
    while(mot != NULL){
        if(isupper(mot[0])){
            count++;
        }
        mot = strtok(NULL," ");
    }
    return count;
}

int main(){
    char str[] = "Bonjour je Suis ChatGPT Et je Peux Aider";
    
    printf("Nombre de mots qui commencent par une majuscule : %d",count(str));
    return 0;
}