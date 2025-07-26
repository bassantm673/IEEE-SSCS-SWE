#include<stdio.h>
#include <stdlib.h> //malloc
#include <string.h>  // memcpy


void *_reshape(void *ptr, size_t old_size, size_t new_size){
    void *new_ptr = malloc(new_size);
    size_t copy_size = (old_size < new_size) ? old_size : new_size;  
    memcpy(new_ptr, ptr, copy_size);  //copy old data

    free(ptr);  
    return new_ptr;  

}


int main(){
    int old_size = 3 * sizeof(int);
    int new_size= 5 * sizeof(int);

    //old
    int *array_old=(int*)malloc(old_size);
    for (int i = 0; i < 3; i++) {
        array_old[i] = i * 5; 
    }
    printf("The Old Array:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", array_old[i]);
    }

    //new
    int *arr_resapea = (int*) _reshape(array_old, old_size, new_size);
    for (int i = 3; i < 5; i++) {
            arr_resapea[i] = i * 10; 
        }

        //old+new
        printf("The New Array:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d\n", arr_resapea[i]);
        }

        free(arr_resapea);

    return 0;
}