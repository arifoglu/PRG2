#include <stdio.h>
#include "eleve.h"
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

void test_moyenne(){
    Eleve classe[3] = {{"SAN",23},{"MAN",24},{"BAN",25}};

    float result = moyenne_classe(classe,3);
    CU_ASSERT_DOUBLE_EQUAL(result,24.0,0.001)
}


int main(){
    if(CU_initialize_registry() != CUE_SUCCESS){
        return CU_get_error();
    }

    CU_pSuite suite_moyenne = CU_add_suite("Testing",NULL,NULL);
    if(suite_moyenne == NULL) return CU_get_error();
    CU_add_test(suite_moyenne,"Moyenne test",test_moyenne);

    CU_console_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
    
}
