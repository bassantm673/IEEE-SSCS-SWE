#include<stdio.h>


int is_strong_signal(int strength){
    if (strength>50){
        return 1;
    }else{
        return 0;
    }
}
void check_signal(int strength){
    if (is_strong_signal(strength)){
        printf("%d:Strong signal detected.\n",strength);
    }else{
        printf("%d:No signal detected.\n",strength);
    }
}

int main(){
    int number;
    printf("enter your number: ");
    scanf("%d",&number);
    check_signal(number);
    
    
}