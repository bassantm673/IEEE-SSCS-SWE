#include<stdio.h>

char *get_reply(){
    static char string[]="IEEE";
    return string;
}


int main(){
    printf("%s\n",get_reply());
}