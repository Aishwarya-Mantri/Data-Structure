#include <stdio.h>
#include <stdlib.h>
# define MAX 5
int main()
{
   int arr[MAX];
   int size,i,index;
   printf("\n_________Program to delete element from Array_______\n\n");
   printf("Enter Size of array\t");
   scanf("%d",&size);
   printf("\nEnter %d Array elements:",size);
   for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("\nArray elements Are:\n");
   for(i=0;i<size;i++)
   {
       printf(" a[%d]= %d",i,arr[i]);
   }

   printf("\n\nEnter the location where you wish to delete element\n");
   scanf("%d", &index);

   for(i=index;i<size-1;i++)   //change
   {
       arr[i]=arr[i+1];
   }

   printf("\nElements After Deletion\n");
   for(i=0;i<size-1;i++)
   {
       printf(" a[%d]= %d",i,arr[i]);
   }
    return 0;
}
