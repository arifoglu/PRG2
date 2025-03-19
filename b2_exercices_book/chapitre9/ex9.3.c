#include <stdio.h>

int som(int t[],int size);

int main() {
    int t[5] = {1,2,3,4,5};
    int size = sizeof(t) / sizeof(t[0]);

    printf("somme : %d\n",som(t,size));

    return 0;
}

int som(int t[],int size){
    int total = 0;
    int i = 0;
    while(i < size){
        total += t[i];
        ++i;
    }
    return total;
}
