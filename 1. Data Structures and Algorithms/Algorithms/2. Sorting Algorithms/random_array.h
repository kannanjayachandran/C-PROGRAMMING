#include <stdlib.h>


int *randNum(int n){

   // Dynamically allocating an array of size n
   int *array = malloc(n*sizeof(int));

   // Checking if memory is allocated; if not returning NULL
   if (!array){
      return NULL;
   }

   // filling the array with random values using the rand() function
    for (int i = 0; i<n; i++){
        
        array[i] = (rand() % 100) + 1;
     }

     return array;
}