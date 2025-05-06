#include<stdio.h>

int main(){
int number=98;
int *ptr=&number;

printf("%d\n",number);
printf("%d\n",*ptr);
printf("%p\n",ptr);
printf("%p\n",&number);
}