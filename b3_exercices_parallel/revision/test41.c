#include <stdio.h>

int main() {
    FILE *fsource, *fdest;
    fsource = fopen("sayi.dat","rb");
    if(fsource == NULL)return 1;
    fdest = fopen("pozitif.dat","wb");
    if(fdest == NULL)return 1;

    int arr[3];
    scanf("%d %d %d",&arr[0], arr[1], arr[2]);

    fwrite(arr,sizeof(int),3,fdest);

    fclose(fsource);
    fclose(fdest);
    
    return 0;
}