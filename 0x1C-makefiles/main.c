#include <stdio.h>
#include "m.h"

void print_hello(void) {
    printf("Hello, World!\n");
}

int main(void) {
    print_hello();
    printf("Add: %d\n", add(2, 3));
    printf("Subtract: %d\n", subtract(5, 2));
    return 0;
}
