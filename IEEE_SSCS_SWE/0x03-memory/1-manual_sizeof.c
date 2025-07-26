#include <stdio.h>

int manual_sizeof() {
    int x;
    int *first = &x;
    int *second = first + 1;

    return (char*)second - (char*)first;
}

int main() {
    printf("Manual size of int: %d bytes\n", manual_sizeof());
    return 0;
}
