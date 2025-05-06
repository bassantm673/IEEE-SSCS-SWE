#include <stdio.h>
#include <stdlib.h>


int countDigit(long long n){
    if (n !=0){
        return 1+countDigit(n /10);
    }else{
        return 0;
    }
}
int sumDigits (long long n){
    if (n !=0){
        return (abs(n) %10)+sumDigits(abs(n)/10);
    }else{
        return 0;
    }
}


int main(){
    long long number=1234570;
    printf("%d\n",countDigit(number));
    printf("%d\n",sumDigits(number));
}