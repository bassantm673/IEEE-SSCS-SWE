#include <stdio.h>
#include <unistd.h>
#include "_putchar.h"


int _putchar(char x){
    return write(1,&x,1);
}
