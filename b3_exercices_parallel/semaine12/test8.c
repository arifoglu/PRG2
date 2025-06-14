#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

int topla(int a, int b){
    return a + b;
}

void test_topla_pozitif(){
    CU_ASSERT_EQUAL(topla(2,3),5);
}
void test_topla_negatif(){
    CU_ASSERT_EQUAL(topla(-1,1),0);
}

int main () {
    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Toplama testleri",NULL,NULL);
    CU_add_test(suite,"Pozitif test",test_topla_pozitif);
    CU_add_test(suite,"Negatif test",test_topla_negatif);

    CU_console_run_tests();
    CU_cleanup_registry();

    return 0;
}