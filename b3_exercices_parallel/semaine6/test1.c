#include <stdio.h>

int main(){
    // option 1
    char *adr;
    adr = "hello";
    printf("%s\n",adr); 

    // option 2
    char ch[20] = "hallo";
    printf("%s\n",ch); 

    // option 3 => bu tarz kullanimda sona 0 koymak gerekli
    char chx[20] = {'h','i','\0'};
    printf("%s\n",chx); 

    return 0;
}