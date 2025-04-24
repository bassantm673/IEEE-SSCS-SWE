#include <stdio.h>

int main(){

    int i;
    int n;
    for (i=0; i<10;++i){
        for (n=0; n<10 ;++n){
            printf("%d",n*i);
            if(n!=9){
            printf(",");
            printf(" ");
            }
        }
        printf("\n");
    }
}