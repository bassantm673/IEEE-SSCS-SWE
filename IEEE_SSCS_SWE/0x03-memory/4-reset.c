#include<stdio.h>
int any_counter;

void acess_one(){
    static int count_one;
    count_one++ ;
    printf("acess one function called %d times\n",count_one);
    any_counter++;
}
void acess_tow(){
    static int count_tow;
    count_tow++ ;
    printf("acess tow function called %d times\n",count_tow);
    any_counter++;
}
void acess_both(){
    printf("acess both functions called %d times\n",any_counter);
}  


int main(){
acess_one();
acess_one();
acess_tow();
acess_one();
acess_tow();
acess_one();
acess_both();
}

