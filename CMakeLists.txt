cmake_minimum_required(VERSION 2.6)
project(CMakeTutorial)

set(CMAKE_BUILD_TYPE Release)

set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)
configure_file(${PROJECT_SOURCE_DIR}/TutorialConfig.in.h ${PROJECT_SOURCE_DIR}/TutorialConfig.h)

include_directories(${PROJECT_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR}/MathFunctions)

add_subdirectory(MathFunctions)
add_subdirectory(TestPrints)
set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)

add_executable(CMakeTutorial main.cpp)
target_link_libraries(CMakeTutorial ${EXTRA_LIBS})
