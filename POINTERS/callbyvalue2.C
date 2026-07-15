#include <stdio.h>

void doubleValue(int n) {
    n = n * 2;
    printf("Inside function: n = %d\n", n);
}

int main() {
    int x = 5;
    printf("Before function: x = %d\n", x);
    doubleValue(x);
    printf("After function: x = %d\n", x);
    return 0;
}


