#include<stdio.h>



void echo(int n){
    if (n>0){
    printf("echo📢📢📢\n");
    echo(n-1);
    }
}

int main(){
echo(5);

}