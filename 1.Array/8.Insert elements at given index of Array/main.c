#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main() {

    printf("\n______Insert Element At the given index of Array_______\n\n");

   int array[MAX] = {1, 2, 3,4};

   int N = 4;        // number of elements in array
   int i = 0;        // loop variable
   int index = 2;    // index location to insert new value
   int value = 5;    // new data element to be inserted

   // print array before insertion
   printf("\nPrinting array before insertion \n\n");

   for(i = 0; i < N; i++) {
      printf(" array[%d] = %d \n", i, array[i]);
   }

   // now shift rest of the elements downwards
   printf(" \n    Shifting of Elemnts      \n");
   for(i = N-1; i >= index; i--) {

      array[i+1] = array[i];
      printf("\n array[%d]:%4d = array[%d]:%4d",i+1,array[i+1],i,array[i]);
   }

   // add new element at first position
   array[index] = value;

   // increase N to reflect number of elements
   N++;

   // print to confirm
   printf("\n\nPrinting array after insertion \n\n");

   for(i = 0; i < N; i++) {
      printf(" array[%d] = %d\n", i, array[i]);
   }
   return 0;
}

