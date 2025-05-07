#include <stdio.h>

/*
char 1 byte , int 4 byte => hizalama için 3 byte boşluk eklenir (padding)
*/
typedef struct {
  char c; // 1 byte
  int x;  // 4 byte
}normalstruct;

/*
#pragma pack(1) → 1 byte hizalama:Boşluk (padding) eklenmez.
#pragma pack()  → Varsayılana geri dön:
*/
#pragma pack(1)
typedef struct {
  char c; // 1 byte
  int x;  // 4 byte
}pragmastruct;
#pragma pack()

int main() {
  printf("Boyut : %lu\n",sizeof(normalstruct)); // Boyut : 8
  
  printf("Boyut : %lu\n",sizeof(pragmastruct)); // Boyut : 5

}