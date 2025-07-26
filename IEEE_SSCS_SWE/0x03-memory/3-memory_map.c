#include<stdio.h>
#include<stdlib.h>

int glob_v=8;

int main(){
    int local_v=10;

    int *malloc_v=(int *)malloc(sizeof(int));
    *malloc_v=50;
    char *string_v="3aaaaaaaaaaaaa";

    //adress change fe kol mara b run
    printf("%p : Data(static) -> %d\n",&glob_v,glob_v);
    printf("%p : static -> %d\n",&local_v,local_v);
    printf("%p : Heap -> %d\n",malloc_v,*malloc_v);
    printf("%p : rodata -> %s\n",(void*)string_v,string_v);

    free(malloc_v);


}