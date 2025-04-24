#include<stdio.h>
#include "_putchar.h"

int main(){
    
    char i;
    for (i='a' ; i<='z' ; ++i){
        _putchar(i);
    }

    for (i='Z' ; i>='A' ; --i){
        if(i!='Q'){
            _putchar(i);
        }
    }   
    _putchar('\n');

    
    return 0;
} 