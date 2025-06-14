#include <stdio.h>
#include "mathutils.h"
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

void test_doubler(){
    CU_ASSERT_EQUAL(doubler(2),4);
}

int main() {
    if(CU_initialize_registry() != CUE_SUCCESS){
        return CU_get_error();
    }

    CU_pSuite suite_doubler = CU_add_suite("Testing",NULL,NULL);
    if(suite_doubler == NULL) return CU_get_error();
    CU_add_test(suite_doubler,"doubler test ",test_doubler);

    CU_console_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}