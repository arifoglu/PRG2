#include <stdio.h>

int main(){
    //1
    int i;  
    for (i = 0; i <= 5; i += 2) {
        printf("%d ", i);
    }
    //2
    for (int i = 1; i != 16; i *= 2) {
        printf("%d ", i);
    }
    return 0;
}