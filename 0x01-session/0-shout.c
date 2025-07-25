#include<stdio.h>

void repeat_message(int n){
    for(int i=0;i<n;i++){
        printf("%d- Hello, world.\n", i + 1);
    }
}

int main(){
    int number;
    printf("how many times do you need repeat: ");
    scanf("%d",&number);
    repeat_message(number);
}