#include <stdio.h>
#include <string.h>

int main(){
    // memchr() => bellekte karakteri arar,adresini doner.
    char data[] = "Hello world";
    char *ptr = memchr(data,'r',strlen(data));
    printf("%p\n",ptr);

    // memcmp() => İki bellegi n bayt boyunca karşılaştırır.
    char a[] = "abc";
    char b[] = "def";
    printf("%d\n",memcmp(a,b,3)); // esit 0, farkli -

    // mmcpy() => Bir bellekten diğerine kopyalar
    char source[] = "Hello";
    char dest[10];
    memcpy(dest,source,strlen(source) + 1);
    printf("%s \n",dest); 

    // memset() => bellege aynı değeri (int c) n kere yazar.
    char buffer[10];
    memset(buffer,'*',9);
    buffer[9] = '\0';
    printf("%s\n",buffer);
     
    return 0;
}