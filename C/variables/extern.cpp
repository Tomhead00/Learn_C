#include <stdio.h>
#include "extern.h"

extern int globalVar;

int main() {
    printf("Value of globalVar: %d\n", globalVar);
    return 0;
}