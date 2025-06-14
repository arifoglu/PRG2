#include <CUnit/Basic.h>
#include "biblio.h"

// main()'İN DIŞINDA
void test_biblio(void) {
    livre_t collection[10];
    int nbLivres = 0;

    livre_t livre1;
    strcpy(livre1.titre, "1984");
    strcpy(livre1.auteur, "George Orwell");
    livre1.annee = 1949;

    ajouterLivre(collection, &nbLivres, livre1);

    const livre_t *trouve = rechercherLivreParTitre(collection, nbLivres, "1984");

    CU_ASSERT_PTR_NOT_NULL(trouve);
    CU_ASSERT_STRING_EQUAL(trouve->titre, "1984");
    CU_ASSERT_STRING_EQUAL(trouve->auteur, "George Orwell");
    CU_ASSERT_EQUAL(trouve->annee, 1949);
}

// main()'İN KENDİSİ
int main() {
    if (CU_initialize_registry() != CUE_SUCCESS)
        return CU_get_error();

    CU_pSuite suite = CU_add_suite("biblio_suite", 0, 0);
    if (!suite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (!CU_add_test(suite, "Test biblio", test_biblio)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();  // veya custom_test_runner(suite);
    CU_cleanup_registry();

    return CU_get_error();
}
