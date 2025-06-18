#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>

int cube(int x){
    return x * x * x;
}

void testcube(){
    CU_ASSERT_EQUAL(cube(2),8);
    CU_ASSERT_EQUAL(cube(-2),-8);
}

int main() {
    if(CU_initialize_registry() != CUE_SUCCESS){
        return CU_get_error();
    }
    
    CU_pSuite suite_cube = CU_add_suite("TESTS",NULL,NULL);
    if(suite_cube == NULL) goto out; 
    CU_add_test(suite_cube,"cube test",testcube);

    #if 1
    CU_console_run_tests();
    #endif

    out:
    CU_cleanup_registry();
    return CU_get_error();
}