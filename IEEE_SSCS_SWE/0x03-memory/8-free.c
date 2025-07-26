#include <stdio.h>
#include <stdlib.h>

void free_array(int **arr) {
    int i = 0;

    while (arr[i] != NULL) {
        free(arr[i]);  
        i++;
    }
    free(arr); 
}

int main() {
    int rows = 3, cols = 3;

    int **arr = (int **)malloc((rows + 1) * sizeof(int *));
    
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));  
    }


    arr[rows] = NULL; //a5r row (+1) hykon faady to stop loop


    arr[0][0] = 3; arr[0][1] = 6; arr[0][2] = 9;
    arr[1][0] = 5; arr[1][1] = 10; arr[1][2] = 15;
    arr[2][0] = 7; arr[2][1] = 8; arr[2][2] = 9;

    
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    free_array(arr);

    return 0;
}
