//
// Created by lucas on 11/06/19.
//


#include "Test_Suma.h"

void agregar_tests_suma() {
    CU_pSuite suma = CU_add_suite("Suma", inicializar_suma, limpiar_suma);
    CU_add_test(suma, "test_suma", test_suma);
}

int inicializar_suma () {
    return 0;
}

int limpiar_suma () {
    return 0;
}

void test_suma () {
    int resultado = suma();
    CU_ASSERT_EQUAL(resultado, 10);
}