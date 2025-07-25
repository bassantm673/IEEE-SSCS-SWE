#include<stdio.h>


int _isalpha(char x){
    if((x>='a'&& x<='z')||(x>='A'&& x<='Z')){
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
    printf("%d\n", _isalpha('g'));
}