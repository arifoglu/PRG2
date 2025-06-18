
#include <CUnit/CUnit.h>
#include <CUnit/CUCurses.h>

// Fonctions à tester
float temperature_moyenne(const float *tab, int taille);
float temperature_max(const float *tab, int taille);

void test_temperature_moyenne(void) {
    float tab1[] = {10.0, 20.0, 30.0};
    float tab2[] = {42.0};
    float tab3[] = {};

    CU_ASSERT_DOUBLE_EQUAL(temperature_moyenne(tab1, 3), 20.0, 0.0001);

    CU_ASSERT_DOUBLE_EQUAL(temperature_moyenne(tab2, 1), 42.0, 0.0001);

    CU_ASSERT_DOUBLE_EQUAL(temperature_moyenne(NULL, 0), 0.0, 0.0001);

    CU_ASSERT_DOUBLE_EQUAL(temperature_moyenne(tab3, 0), 0.0, 0.0001);
}

void test_temperature_max(void) {
    float tab1[] = {10.0, 22.5, 18.0, 5.0};
    float tab2[] = {-5.0};
    float tab3[] = {};

    CU_ASSERT_DOUBLE_EQUAL(temperature_max(tab1, 4), 22.5, 0.0001);

    CU_ASSERT_DOUBLE_EQUAL(temperature_max(tab2, 1), -5.0, 0.0001);

    CU_ASSERT_DOUBLE_EQUAL(temperature_max(NULL, 0), 0.0, 0.0001);

    CU_ASSERT_DOUBLE_EQUAL(temperature_max(tab3, 0), 0.0, 0.0001);
}

int main() {
    CU_pSuite pSuite = NULL;

    if (CU_initialize_registry() != CUE_SUCCESS)
        return CU_get_error();

    pSuite = CU_add_suite("Test Températures", NULL, NULL);
    if (!pSuite)
        goto out;

    if (!CU_add_test(pSuite, "Moyenne", test_temperature_moyenne) ||
        !CU_add_test(pSuite, "Maximum", test_temperature_max))
        goto out;

    CU_curses_run_tests();

out:
    CU_cleanup_registry();
    return CU_get_error();
}
