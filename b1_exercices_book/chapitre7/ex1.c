#include <stdio.h>

int max(int t[],int size);
int min(int t[],int size);

int main() {
    int tablo[10] = {22,3,4,5,6,14,7,8,10,12};
    int size = sizeof(tablo) / sizeof(tablo[0]);
    int maximum = max(tablo,size);
    int minimum = min(tablo,size);

    printf("%d\n",maximum);
    printf("%d\n",minimum);

    return 0;
}

int max(int t[],int size){
    int m = t[0];
    for(int i = 0; i < size;++i ){
        if(t[i] > m){
            m = t[i];
        }
    }
    return m;
}
int min(int t[],int size){
    int m = t[0];
    for(int i = 0; i < size;++i ){
        if(t[i] < m){
            m = t[i];
        }
    }
    return m;
}