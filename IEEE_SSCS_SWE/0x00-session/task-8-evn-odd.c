#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void)
{
	int n;
    int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_digit=abs(n)%10 ;
	
    if (n%2==0){
        printf("%dnumber is even \n",n);
    }else{
        printf("%dnumber is odd \n",n);
    }
    
    printf("last digit is %d\n",last_digit);
    

        if (last_digit > 5) {
            printf("%d is greater than 5\n", last_digit);
        } else if (last_digit < 5) {
            printf("%d is less than 5\n", last_digit);
        } else {
            printf("%d is equal to 5\n", last_digit);
        }



	return (0);
}