#include <stdio.h>

char f(int t[],int n, int m);

int main() {
    int t[5] = {1,2,3,4,5};
    int n = sizeof(t) / sizeof(t[0]);

    printf("%d\n",f(t,n,9));

    return 0;
}
char f(int t[],int n, int m){
    for(int i = 0; i < n;++i){
        if(t[i] == m){
            return 1;
        }
    }
    return 0;
}