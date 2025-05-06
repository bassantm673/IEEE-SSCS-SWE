#include<stdio.h>


int is_response_detected(int strength){
    if (strength>50){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int number;
    printf("enter your number: ");
    scanf("%d",&number);
    if (is_response_detected(number)){
        printf("%d: Response detected.\n",number);
    }else{
        printf("%d: No response detected.\n",number);
    }
    
}