#include <stdio.h>

// __FUNC__ =>Şu an çalışmakta olan fonksiyonun adını verir.
void f(){
  printf("Fonction %s\n",__func__);
}

int main() {
  f();                                 // Fonction f     

  // __LINE__ =>Kodun bulunduğu satır numarasını verir (int türünde).
  printf("This is line %d\n",__LINE__);// This is line 12
  printf("This is line %d\n",__LINE__);// This is line 13

  // __FILE__ => Kodun bulunduğu dosya adını (string olarak) verir.
  printf("File : %s\n",__FILE__);

  return 0;
}