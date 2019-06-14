project(prog_tests)

add_executable(tests
        Run_main_Tests.c
        Run_main_Tests.h
        Test_Suma/Test_Suma.c
        Test_Suma/Test_Suma.h)

target_link_libraries (tests PRIVATE cunit)
target_link_libraries (tests PRIVATE suma_lib)