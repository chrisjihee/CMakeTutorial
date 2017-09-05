#include <cstdio>

#include "MathFunctions.h"
#include "TutorialConfig.h"

int main() {
    printf("================================================================================\n");
    printf("CMAKE_CXX_FLAGS_DEBUG = %s\n", CMAKE_CXX_FLAGS_DEBUG);
    printf("CMAKE_CXX_FLAGS_RELEASE = %s\n", CMAKE_CXX_FLAGS_RELEASE);
    printf("CMAKE_C_FLAGS_DEBUG = %s\n", CMAKE_C_FLAGS_DEBUG);
    printf("CMAKE_C_FLAGS_RELEASE = %s\n", CMAKE_C_FLAGS_RELEASE);
    printf("================================================================================\n");

    double inputValue = 3.0;
    printf("The square root of %g is %g\n", inputValue, mysqrt(inputValue));
    printf("================================================================================\n");

    return 0;
}
