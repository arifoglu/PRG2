#include <stdio.h>
#include <math.h>

void init(int t[],int size,int result[]);

int main() {
    int t[5] = {1,2,3,4,5};
    int size = sizeof(t) / sizeof(t[0]);
    int result[size];

    init(t,size,result);

    for(int i = 0; i < size;++i){
        printf("%d ",result[i]);
    }
    printf("\n");
    return 0;
}
void init(int t[],int size,int result[]){
    for(int i = 0; i < size;++i){
        result[i] = pow(2,t[i]);
    }
}

