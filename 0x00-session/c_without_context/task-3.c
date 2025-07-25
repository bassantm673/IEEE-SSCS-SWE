#include <stdio.h>

int main(){
    char x;
    printf("Enter a char: ");
    scanf("%c",&x);
    if(x >='a' && x <='z'){
        printf("Lower\n");
    }else if (x >='A' && x <='Z'){
        printf("Upper\n");
    }
}