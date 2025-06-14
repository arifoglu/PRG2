#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

int kup(int x){
    return x * x * x;
}

void kup_test(){
    CU_ASSERT_EQUAL(kup(3),27);
}

int main () {
    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Kup alma testi",NULL,NULL);
    CU_add_test(suite,"kup alma",kup_test);

    CU_console_run_tests();
    CU_cleanup_registry();

    return 0;
}