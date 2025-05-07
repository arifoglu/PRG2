#include <stdio.h>

/*
char 1 byte , int 4 byte => hizalama için 3 byte boşluk eklenir (padding)
*/
typedef struct {
  char c; // 1 byte
  int x;  // 4 byte
}normalstruct;

/*
#pragma pack(push,1) => Şu andaki ayarı kaydet ve 1-byte hizalamaya geç
#pragma pack(pop)    => Önceki ayara geri dön
*/

#pragma pack(push,1) // Şu andaki ayarı kaydet ve 1-byte hizalamaya geç
typedef struct {
  char c; // 1 byte
  int x;  // 4 byte
}pragmastruct;
#pragma pack(pop)    // // Önceki hizalamaya geri dön

int main() {
  printf("Boyut : %lu\n",sizeof(normalstruct)); // Boyut : 8
  
  printf("Boyut : %lu\n",sizeof(pragmastruct)); // Boyut : 5

}