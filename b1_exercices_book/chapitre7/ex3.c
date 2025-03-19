#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void tri(int t[],int size){
    for(int i = 0 ; i < size - 1;++i){
        for(int j = 0; j < size - i -1;++j){
            if(t[j] > t[j+1]){
                swap(&t[j],&t[j+1]);
            }
        }
    }  
}

int main() {
    int tablo[] = {12,13,21,3,4,5,6,34,8,7};
    int size = sizeof(tablo) / sizeof(tablo[0]);
    int v[size];

    tri(tablo,size);
    for(int i = 0;i < size;++i){
        printf("%d ",tablo[i]);
    }
    printf("\n");
    
    return 0;
}
