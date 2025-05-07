#include <stdio.h>

/*
MAX_SIZE = 400 olduğundan, hiçbir uyarı veya hata gelmez.

#define MAX_SIZE 600  => bir warning alınir ama kod yine çalışırdı.

#define MAX_SIZE 2048 => bir error alınir ve derleme dururdu.
*/

#define MAX_SIZE 400 

#if MAX_SIZE > 1024
    // Derleme sırasında error üretir ve derlemeyi durdurur.
    #error "Taille maximale superieur à 1024"
#elif MAX_SIZE > 500
    //MAX_SIZE > 500 ise bir uyarı verir, ama derleme devam eder.
    #warning "Taille maximale superieur élévé" 
#endif

int main() {
  printf("Hello\n");
}