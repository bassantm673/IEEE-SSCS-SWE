#include <stdio.h>

void status(int num){
    if(num > 0){
        printf("Positive\n");
    } else if(num < 0){
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
}

int main()
{
    void (*func_ptr)(int) = status;//pointer for function 3adia static
    func_ptr(5);
    return 0;

}
