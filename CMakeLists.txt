cmake_minimum_required(VERSION 2.6)
project(CMakeTutorial)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
add_subdirectory(MathFunctions)
set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)

add_executable(CMakeTutorial main.cpp)
target_link_libraries(CMakeTutorial ${EXTRA_LIBS})
