#include <stdio.h>
#include <stdlib.h>

void *clear_allocation(size_t count, size_t size) {
    //                 5  *  int
    void *n = malloc(size * count);
    if (n == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // cast to char* to set byte by byte (universal zeroing)
    char *bytes = (char *)n;
    for (size_t i = 0; i < count * size; i++) {
        bytes[i] = 0;
    }

    return n;
}

int main() {
    int *arr_callo = (int *) clear_allocation(3, sizeof(int));

    if (arr_callo != NULL) {
        for (int i = 0; i < 3; i++) {
            printf("%d ", arr_callo[i]);
        }
        printf("\n");
    }

    free(arr_callo);
    return 0;
}  
/*
1- I initially wrote `int *n = malloc(...)` but realized that would limit
   the function to only integers. So I changed it to `void *` to make it general.
    Then, depending on the type I need (int, char, etc.), I can cast it after calling.

2- I wasn't sure at first why I could return from a function declared as "void".
   But actually, the function is declared as `void *`, not `void`, so it  return a pointer.

3- I learned that you cannot access memory directly using a `void *` pointer.
   That's why I casted it to `char *` so I could set each byte to zero using a loop.
    لازم أحوّل المؤشر من void* إلى char* علشان أقدر أمشي على الذاكرة بايت بايت

*/
