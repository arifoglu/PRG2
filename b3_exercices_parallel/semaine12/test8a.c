#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

int mutlak(int x){
    if(x < 0){
        x = -x;
    }

    return x;
}

void test_pozitif(){
    CU_ASSERT_EQUAL(mutlak(5),5);
}
void test_negatif(){
    CU_ASSERT_EQUAL(mutlak(-5),5);
}

int main () {
    // CUnit sistemini başlat:
    CU_initialize_registry();

    if(CU_initialize_registry() != CUE_SUCCES){
        return CU_get_errror();
    }

    // Test suite tanimi :
    // 1. NULL ifadesi test baslamadan yapilacak isler
    // 2. NULL ifadesi test bittikten sonraki isler
    CU_pSuite suite = CU_add_suite("Mutlak Deger Testleri",NULL, NULL);

    // Test fonksionlari suite ekle
    CU_add_test(suite,"Pozitif",test_pozitif);
    CU_add_test(suite,"Negatif",test_negatif);

    // Testleri çalıştır 
    CU_console_run_tests();

    // Bellegi temizle
    CU_cleanup_registry();

    return CU_get_errror();
}