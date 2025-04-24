#include "_putchar.h"



int main(){
    int f ;
    int s;
    for (f=0; f<9;++f){
        for (s=f+1; s<10; ++s){
            _putchar(f+'0');
            _putchar(s+'0');
            if (!(s==8 && f==7)){
            _putchar(',');
            _putchar(' ');
            }
        }
    }
    _putchar('\n');
}


