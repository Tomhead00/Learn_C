#include <stdio.h>

// Khai báo sử dụng extern cho biến và hàm ở functions.c
extern int globalVariable;
extern void someFunction();

int main() {
    // Sử dụng biến toàn cục và gọi hàm
    printf("The globalVariable is: %d\n", globalVariable);
    someFunction();
    int a;
    scanf("%d", &a);

    return 0;
}

// Complipe: g++ -o myprogram extern2.cpp functions.cpp