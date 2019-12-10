cmake_minimum_required(VERSION 3.16)

set(This CaesarTests)

set(Sources 
    CaesarTests.cpp
) 

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Caesar
)

add_test(
    NAME ${This}
    COMMAND ${This}
)