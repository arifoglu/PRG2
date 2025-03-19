#include <stdio.h>

void impair(int t[],int size);

int main() {
    int t[5] ={1,2,3,4,5};
    int size = sizeof(t) / sizeof(t[0]);
    impair(t,size);
    return 0;
}

void impair(int t[],int size){
    for(int i = 0; i < size;++i){
        if(t[i] %2 != 0){
            printf("t[%d] = %d\n",i , t[i]);        
        }
    }
}