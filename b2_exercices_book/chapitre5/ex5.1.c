#include <stdio.h>

int main() {
    int n1, n2;
    printf("n1 : ");
    scanf("%d",&n1);
    while(getchar() != '\n');
    printf("n2 : ");
    scanf("%d",&n2);
    while(getchar() != '\n');
    n1 < n2 ? printf("%d %d\n",n1,n2) : printf("%d %d\n",n2,n1); 
    return 0;
}