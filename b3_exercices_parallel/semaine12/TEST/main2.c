#include <stdio.h>
#include "personne.h"
#include <string.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

void test_personne(){
    Personne p = creer_personne("Alice",30);

    CU_ASSERT_EQUAL(p.age,30);
    CU_ASSERT_STRING_EQUAL(p.nom,"Alice");
}

int main () {
    if(CU_initialize_registry() != CUE_SUCCESS){
        return CU_get_error();
    }

    CU_pSuite suite_personne = CU_add_suite("Testing",NULL,NULL);
    if(suite_personne == NULL) return CU_get_error();
    CU_add_test(suite_personne,"Personne test",test_personne);

    CU_console_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}