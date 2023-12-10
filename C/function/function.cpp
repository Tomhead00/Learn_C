#include <stdio.h>

/* function declaration */
// Call by value
void swap(int x, int y);

// Call by reference
void swap2(int &x, int &y);

int main() {
    /* local variable definition */
    int a = 100;
    int b = 200;

    printf("Before swap, value of a : %d\n", a);
    printf("Before swap, value of b : %d\n", b);

    /* calling a function to swap the values */
    swap(a, b);

    printf("After swap, value of a : %d\n", a);
    printf("After swap, value of b : %d\n", b);

    printf("Before swap, value of a : %d\n", a);
    printf("Before swap, value of b : %d\n", b);

    /* calling a function to swap the values */
    swap2(a, b);

    printf("After swap, value of a : %d\n", a);
    printf("After swap, value of b : %d\n", b);

    return 0;
}

void swap(int x, int y) {
    int temp;

    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put temp into y */

    return;
}

void swap2(int &x, int &y) {
    int temp;

    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put temp into y */

    return;
}