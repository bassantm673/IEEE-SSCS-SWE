#include "_putchar.h"



int main(){
    int f ;
    int s;
    int th;
    for (f=0; f<9;++f){
        for (s=f+1; s<10; ++s){
            for (th=s+1;th<10;++th){
            _putchar(f+'0');
            _putchar(s+'0');
            _putchar(th+'0');
            if (!(th==9 && s==8 && f==7)){
            _putchar(',');
            _putchar(' ');
            }
            }
        }
    }
    _putchar('\n');
}


