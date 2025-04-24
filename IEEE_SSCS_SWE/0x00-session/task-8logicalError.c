#include <stdio.h>

void isEven(int n) {
	//n%2==0----> even not odd
	if (n % 2 == 0) {
		printf("%d is even\n", n);
	} else {
		printf("%d is odd\n", n);
	}                          
}

void calculateArea(float n) {
//n==0 not n=0
	if (n == 0) {
		printf("no radius specified\n");
	} else {
		printf("the radius exists\n");
	}
}

//call function in main 
int main() {
	isEven(5);
	calculateArea(3);
}
