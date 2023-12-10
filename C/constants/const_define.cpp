#include <stdio.h>
// Sử dụng const
const int MAX_VALUE = 100;

// Sử dụng #define
#define MAX_VALUE_MACRO 100

int main()
{
    // Sử dụng biến hằng số
    const int MIN_VALUE = 0;

    // Sử dụng macro
    int value = MAX_VALUE_MACRO;

    printf("const: %d \t #define: %d", MIN_VALUE, value);

    return 0;
}