#include <stdio.h>

int main(){
    char op;
    int n1, n2;
    
    printf("operation (+ or *) ? : ");
    scanf("%c",&op);
    // can use the method => getchar() 
    //op = getchar();
    
    printf("donnez 2 nombres entiers : ");
    scanf("%d %d",&n1, &n2);
    
    if(op == '+'){
        printf("somme : %d\n",n1 + n2);
    }else if(op == '*'){
        printf("produit : %d\n", n1 * n2);
    }
    return 0;
}