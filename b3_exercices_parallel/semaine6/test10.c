#include <stdio.h>
#include <string.h>

int main(){
    // strncat() => girile sayi kadar birlestirme yapar
    char str1[20] = "Hello ";
    char str2[] = "world!!";
    strncat(str1,str2,5);
    printf("%s\n",str1); 
    
    // strchr() => caracter arar,indexin pointeri doner
    char str3[10] = "salut";
    char *ptr = strchr(str3,'l');
    printf("caracter : %c\n",*ptr);
    
    // strcmp() => iki stringi karsilatrir.esitse 0, farkliysa 1,
    char str4[] = "salut";
    char str5[] = "salut";
    printf("%d\n",strcmp(str4,str5));

    // strncpy() => herzaman alinan sayi - 1 indexine '\0' eklenecek.
    char str6[10] ;
    char source[] = "salutations";
    strncpy(str6,source,5);
    str6[5] = '\0';// onemli sona koymak gerekir
    printf("%s \n",str6);
    // strcpy => '\0' otomatik eklenir

    // strstr() => substring arar
    char str7[20] = "hello world";
    char mot[] = "world";
    char *ptrx = strstr(str7,mot);
    printf("index \"world\" : %ld\n",ptrx - str7);

    return 0;
}