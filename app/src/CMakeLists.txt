project(src_prog)

add_library(suma_lib STATIC suma/suma.c suma/suma.h)
target_include_directories(suma_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(prog main.c)
target_link_libraries(prog PRIVATE suma_lib)