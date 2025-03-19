#include <stdio.h>

int maximum(int t[], int size);

int main() {
    int t[5] = {1,2,3,4,5};
    int size = sizeof(t) / sizeof(t[0]);
    printf("max = %d\n",maximum(t,size));
    
    return 0;
}

int maximum(int t[], int size){
    int max = t[0];
    for(int i = 0; i < size;++i){
        if(t[i] > max){
            max = t[i];
        }
    }
    return max;
}