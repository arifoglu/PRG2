#include <stdio.h>

void f(int t[],int size,int *max, int *min);

int main() {
    int tablo[] = {12,13,21,3,4,5,6,34,8,7};
    int size = sizeof(tablo) / sizeof(tablo[0]);
    
    int max, min;

    f(tablo, size, &max, &min);

    printf("max : %d\n",max);
    printf("min : %d\n",min);


    return 0;
}

void f(int t[],int size,int *adres_max, int *adres_min){
    int max = t[0];
    int min = t[0];
    for(int i = 0; i < size;++i){
        if(t[i] > max) max = t[i];
        if(t[i] < min) min = t[i];
    }
    *adres_max = max;
    *adres_min = min;
}
