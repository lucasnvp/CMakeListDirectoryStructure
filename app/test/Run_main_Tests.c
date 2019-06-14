//
// Created by lucas on 11/06/19.
//

#include "Run_main_Tests.h"

int main () {
    CU_initialize_registry();

    agregar_tests_suma();

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}