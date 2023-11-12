#include <stdio.h>

extern int globalVar;

int main() {
    printf("Value of globalVar: %d\n", globalVar);
    return 0;
}