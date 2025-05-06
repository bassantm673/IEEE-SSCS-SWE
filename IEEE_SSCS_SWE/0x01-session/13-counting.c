#include<stdio.h>

int counter(char *st){
    int count=1;

    while(*st==' '){
        st++;
    }
    while(*st){
        if(*st==' '&& *(st+1)!=' '&&*(st+1)!='\0'){
            count++;
        }
        st++;
    }
    printf("numbers of words = %d\n",count);
}
int main(){
    counter("   free    free palstine    ");
}
