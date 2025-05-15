#include <stdio.h>

int main(){
    //char türünde bir dizi tanımlayın ve "CProgramming" stringini bu dizide saklayın
    char str[] = "CProgramming";

    // char türünde bir dizi tanımlayın ve "CProgramming" stringini bu dizide saklayın boyutu belirli olsun
    char str2[13] = "CProgramming";

    //char türünde, 5 elemanlı bir dizi tanımlayın ve "HELLO" stringini bu diziye atamaya çalışın
    char str3[5] = "HELLO";

    //char türünde 10 elemanlı bir dizi tanımlayın ve "HI" stringini bu diziye atayın
    char str4[10] = "HI";

    //char türünde 6 elemanlı bir dizi tanımlayın ve "WORLD" stringini bu diziye
    //atayın
    char str5[6] = "WORLD";

    //char türünde sadece 3 elemanlık bir dizi tanımlayın ve "ABCD" stringini bu
    //diziye atamaya çalışın. 
    char str6[3] = "ABCD";

    // char türünde dinamik olarak boyutlanan bir dizi tanımlayın (yani, malloc veya benzeri bir yöntemle) ve "DYNAMIC" stringini bu diziye atayın
    char *str7;
    str7 = (char *)malloc(8 * sizeof(char));
    strcpy(str7,"DYNAMIC");

    // char türünde const anahtar kelimesi ile bir string tanımlayın 
    const char *str8 = "HELLO";

    // Bir char türünde char işaretçisi kullanarak dinamik bir dizi oluşturun ve "NETWORK" stringini bu diziye atayın.
    char *str9;
    str9 = (char *)malloc(8 * sizeof(char));
    strcpy(str9,"NETWORK");

    //
    return 0;
}