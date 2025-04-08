#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    - atoi()  string'i integere dönüştürür
    - string bir sayısal değeri temsil etmiyorsa, sıfır döner.
    - atoi("a") veya atoi("abc") 0 dönecektir.
    */
    // atoi
    // string => int  e donustu
    char str[] = "123";
    int i = atoi(str);
    printf("%d\n",i);

    // atol
    // atol => long a donustu
    char str2[] = "123456789";
    long k = atol(str2);
    printf("%ld\n",k);
    
    // atof
    // atof => double a donustu
    char str3[] = "123456789";
    double m = atol(str3);
    printf("%f\n",m);

    // sprintf()
    // sprintf() => printf() gibi ; => ama ekran yerine, belirtilen buffer(list) dizisine yazar.
    int age = 23;
    char name[] = "Dan";
    char list[100];
    sprintf(list,"name : %s\nage : %d",name, age);
    printf("%s\n",list);

    return 0;
}