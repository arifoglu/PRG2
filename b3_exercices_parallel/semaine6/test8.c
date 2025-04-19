#include <stdio.h>
#include <string.h>

int main(){
    // srtlen()  => string uzunlugu
    char str[20] = "Hello";
    printf("%lu\n",strlen(str)); // 5

    // sprintf() => string icine yazar.
    char str2[20];
    int age = 25;
    sprintf(str2,"my age %d",age);
    printf("%s\n",str2);

    // sscanf() => string den okur.(cok hassas kullanim )
    char data[] = "DAN 28";
    char name[20];
    int ages;
    sscanf(data,"%s %d",name, &ages);
    printf("%s %d\n",name, ages);
    

    return 0;
}