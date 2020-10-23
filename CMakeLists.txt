cmake_minimum_required(VERSION 3.0.0)
project(fast_json VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB src_folder "src/*.cpp")

add_executable(fast_json ${src_folder})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
