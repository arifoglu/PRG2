#include <stdio.h>

void f(int t[],int size);

int main() {
    int t[10];

    for(int i = 0;i < 10 ;++i){
        printf("%d ",t[i]);
    }
    printf("\n");

    f(t,10);
    
    for(int i = 0;i < 10 ;++i){
        printf("%d ",t[i]);
    }
    printf("\n");

    return 0;
}

void f(int t[],int size){
    for(int i = 0;i <size ;++i){
        t[i] = 0;
    }
}