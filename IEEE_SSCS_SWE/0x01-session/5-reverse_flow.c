#include<stdio.h>

void swap(int *a, int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}

int main(){
    int first_num=7;
    int sec_num = 10;
    printf("BEFOR SWAP first number= %d second number=%d\n",first_num,sec_num);
    swap(&first_num,&sec_num);
    printf("After SWAP first number= %d second number= %d\n",first_num,sec_num);


}