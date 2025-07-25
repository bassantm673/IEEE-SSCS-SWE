#include <stdio.h>

int main(){

    int input_number;
    int i;
    int n;

    printf("Enter the number:");
    scanf("%d",&input_number);
    if(input_number>0 && input_number<15){
        for (i=0 ; i<=input_number ; ++i){
            for (n=0 ; n<=input_number ; ++n){
                printf("%d",n*i);
                if(n!=input_number){
                    printf(",");
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}