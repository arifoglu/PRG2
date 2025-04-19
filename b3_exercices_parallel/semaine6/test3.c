#include <stdio.h>
#include <string.h>

int main(){
    // strlen()
    char str[50] = "hello";   
    printf("%s\n",str); 
    printf("%lu\n",strlen(str)); 
    printf("%lu\n",strlen("hallo")); 

    /////////////////////////// strcat 
    // strcat(but,source) 
    //ikinci arrayi(source) birincinin(but) sonuna ekler.eklemeden önce birinci arrayin sonundaki karakteri (\0) siler.
    char str2[] = " world";
    strcat(str,str2);
    printf("%s\n",str);

    /////////////////////////// strncat
    // strncat(but ,source, largemax), ikinci array(source) den bleirtilen sayi
    // kadar karakter alir ilk arraye ekler.
    char str3[] = "! good morning";
    strncat(str,str3,6);
    printf("%s\n",str);

    ////////////////////////// strcmp
    // strcmp(str1,str2) => iki arrayi karsilastirir
    int i;
    i = strcmp("hello","hello"); // 0
    printf("%d\n",i);

    i = strcmp("hello","hellox");//-1
    printf("%d\n",i);

    i = strcmp("hellox","hello");//1
    printf("%d\n",i);

    ///////////////////// strncmp
    // strncmp(str1,str2,largemax)=>iki arrayi belirtilen sinrtlara kadar karsilastirir
    i = strncmp("hello","hellox",5);//0
    printf("%d\n",i);


    ///////////////////// strcpy
    //strcpy(but,source) => source arrayini,but arrayine kopyalar.
    char str4[]= "salut!";
    char str5[50];
    strcpy(str5,str4);
    printf("%s\n",str5);

    ///////////////////// strncpy
    //strncpy(but,source,largemax) => source arrayini,but arrayine belirtilen limitle kopyalar.
    char str6[]= "salut!";
    char str7[50];
    strncpy(str7,str6,3);
    printf("%s\n",str7);

    ////////////////////// strchr
    // strchr(string,char) => aranan karakterin pointeri dondurur
    char str8[] = "bonjour";
    char *ptr = strchr(str8,'j');
    printf("%ld\n",ptr - str8);// pointer farki index i verir

    ////////////////////// strrchr
    // strchr(string,char) => aranan karakteri sondan arar , pointeri dondurur
    char str9[] = "bonjour bonjour";
    char *ptr2 = strrchr(str9,'b');
    printf("%ld\n",ptr2 - str9);// pointer farki index i verir

    ////////////////////// strstr
    // strstr(string,string) => aranan stringi bulur,pointer dondurur 
    char str10[] = "bonjour tout le monde";
    char *ptr3 = strstr(str10,"monde");
    printf("%ld\n",ptr3 - str10);// pointer farki index i verir

    return 0;
}