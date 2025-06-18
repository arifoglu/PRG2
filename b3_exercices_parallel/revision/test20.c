#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int insertStr(char *str, int len, const char *ins, int pos){
    int lstr = strlen(str);
    int lins = strlen(ins);

    if(lstr + lins > len ) return -1;
    if(pos < 0 || pos > lstr) return -1;

    char *s = (char *)calloc(len,sizeof(char));
    if(!s)return -1;

    strcpy(s,str + pos);
    strcpy(str + pos,ins);
    strcpy(str + pos + lins ,s);

    free(s);
    return 0;
}    

int main() {

    return 0;
}
