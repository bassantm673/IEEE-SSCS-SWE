#include <stdio.h>
#include <stdlib.h> // important to use malloc

int *summon_allies(int *allies, int n) {
    printf("How many allies do you want to summon?\n");

    allies = malloc(n * sizeof(int)); 
    if (allies == NULL) {  
        printf("Memory allocation failed.\n");
        return NULL;
    }

    printf("Enter the values for allies:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &allies[i]);  
    }

    return allies;  
}
int main(){
    int n;
    printf("How many allies do you want to summon? ");
    scanf("%d", &n);
    int *allies = summon_allies(allies, n);
    printf("The allies are:\n");
    for (int i = 0; i < n; i++) {
        printf("Ally %d: %d\n", i + 1, allies[i]);
    }


    return 0;
}