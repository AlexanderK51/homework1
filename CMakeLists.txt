cmake_minimum_required(VERSION 3.28)

project(01.hello_world)

add_executable(hello_world 
    hello_world.cpp
)

set_target_properties(hello_world PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)сь