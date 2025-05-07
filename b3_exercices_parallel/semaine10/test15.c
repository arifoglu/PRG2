#include <stdio.h>

int main() {
    printf("Hello\n");

    
    // #if 0 => kodun geçici olarak çalışmamasını sağlar.
    // #if 1 => yazarsan kod çalışır.
    // Bu teknik, / / ya da /* ... */ yerine tercih //edilir .

    #if 0 
    printf("Bu satır derlenmez\n");
    #endif

    printf("World\n");
    return 0;
}
