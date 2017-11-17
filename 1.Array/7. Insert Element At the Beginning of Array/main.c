#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{

   printf("\n______Insert Element At the Beginning of Array_______\n\n");

   int arr[MAX]={2,3,4,5};
   int i;   //loop variable
   int n=4;  //no of elements in array
   int value=1;  //new element to be inserted at the beginning

   printf("    Array Before Insertion      \n\n");
   for(i=0;i<n;i++)
   {
       printf(" a[%d]=%4d\n",i,arr[i]);
   }

   printf(" \n    Shifting of Elemnts      \n");
   if(n==MAX)   //check for space
   {
       printf("\n No space available to insert new element ");
   }
   else
   {
       for(i=n-1;i>=0;i--)
       {
           arr[i+1]=arr[i];
           printf("\n arr[%d]:%4d = arr[%d]:%4d",i+1,arr[i+1],i,arr[i]);
       }
   }
   printf("\n");

   printf("\n     Array After Shifting:     \n \n ");
   for(i=0;i<MAX;i++)
   {
       printf(" a[%d]=%4d\t",i,arr[i]);
   }

   arr[0]=value;
   n++;
   printf("\n     Array After Insertion:     \n ");
   for(i=0;i<MAX;i++)
   {
       printf("\n a[%d]=%4d\t",i,arr[i]);
   }

   printf("\n");
    return 0;
}
