//this task without putchar and print at the same file not different streams;

#include<stdio.h>

//if char is number return 1
int isNumber(char c) {
    return c >= '0' && c <= '9';
}

int _atoi(char *st){
    int sign=1;
    int final=0;

    //spaces
    while(*st==' '){
        st++;
    }
    

    //sign 
    if (*st == '-') {
        sign = -1;
        st++;
    } else if (*st == '+') {
        st++;
    }


    while(*st !='\0'){
        if (isNumber(*st)){
            final= final*10 + (*st-'0');
        }else{
            break;
        }
        st++;
    }
    return final * sign ;
}

// int main(){
//     printf("%d\n",_atoi("-97af155"));
//     printf("%d\n",_atoi("+97af155"));
//     printf("%d\n",_atoi("   +97af155"));
//     printf("%d\n",_atoi("   -97af155"));

// }