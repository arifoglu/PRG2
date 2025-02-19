#include <stdio.h>

int main(){
    //1
    //int i = 3;
    //do {
    //    printf("%d ", i);
    //    i++;
    //} while (i <= 6);
    
    //2
    int i = 5;
    do {
        printf("%d ", i);
        i *= i;
    } while (i < 25);
    return 0;
}