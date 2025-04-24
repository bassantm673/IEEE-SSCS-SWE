#include<stdio.h>
#include "_putchar.h"

int main(){
    
    char i;
    char n;
    
    for(n=0 ; n<5 ; ++n){
        for (i='a' ; i<='z' ; ++i){
            _putchar(i);
        }
        _putchar('\n');
    }
}