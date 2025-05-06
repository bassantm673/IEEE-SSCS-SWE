#include<stdio.h>

int _atoi(char *st);


//absolute
int absolute(int number){
    if (number<0){
        return number*-1;
    }else{
        return number;
    }
}

//sum
int sum(int number_atoi){
    int moduls;
    int sum_n=0;

    number_atoi=absolute(number_atoi);
    while(number_atoi>0){
        moduls=number_atoi % 10;
        number_atoi/=10;
        sum_n+=moduls;
    }
    return sum_n;
}


int main(int argc, char *argv[]) {
    int total=0;
    for (int i = 1; i < argc; i++) {
    int number_return=_atoi(argv[i]);
    total+=sum(number_return);
    }
    printf("%d\n",total);
    }

// int main(){
    
//     printf("%d\n",sum(_atoi("-45lsd")));
// } 