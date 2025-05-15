#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // sprintf() ile diziye yaz,
    char name[] = "ALI";
    int age = 30;
    char list[100];
    sprintf(list,"%s %d",name,age);
    printf("%s\n",list); 

    // 
    char city[] = "Istanbul";
    int zip = 34000;
    char list2[100];
    sprintf(list2,"%s %d",city,zip);
    printf("%s\n",list2);

    
    return 0;
}