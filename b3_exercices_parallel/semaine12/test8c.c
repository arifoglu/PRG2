#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

int kup(int x){
    return x * x * x;
}

int topla(int a, int b){
    return a + b;
}

void test_kup(){
    CU_ASSERT_EQUAL(kup(2),8);
}

void test_topla(){
    CU_ASSERT_EQUAL(topla(2,3),5);
}

int main () {  
    if(CU_initialize_registry() != CUE_SUCCESS){
        return CU_get_error();
    }

    CU_pSuite suite_kup = CU_add_suite("Kup test",NULL,NULL);
    if(suite_kup == NULL) return CU_get_error();
    CU_add_test(suite_kup,"kup test",test_kup);

    CU_pSuite suite_topla = CU_add_suite("Topla test",NULL,NULL);
    if(suite_topla == NULL) return CU_get_error();
    CU_add_test(suite_topla,"topla test",test_topla);
    
    CU_console_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}