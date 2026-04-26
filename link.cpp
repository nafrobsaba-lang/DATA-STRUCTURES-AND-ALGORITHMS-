#include <stdio.h>
#include <stdlib.h>

int main() { 
   
    void *ptr = malloc(sizeof(int)); 

    
    if (ptr == NULL) { 
        printf("Memory allocation failed!\n"); 
        return 1; 
    } 

    int *num = (int *) ptr; 

  
    *num = 42; 


    printf("The value is: %d\n", *num); 

    
    free(ptr); 

    return 0; }