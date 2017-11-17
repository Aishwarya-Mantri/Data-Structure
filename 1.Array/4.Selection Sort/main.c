#include <stdio.h>
#include <stdlib.h>
int a[7]={4,6,3,2,1,9,7};

void display()
{
    int size=7,i,j,min_index;
    //int a[30];
    for(i=0;i<size;i++)
   {
       printf("%4d",a[i]);
   }
   printf("\n");

}
int main()
{

    int size=7,i,j,min_index;
    //int a[30];
   // int min=a[0];  //suppose

  /* printf("\n Enter Size of Array: ");
   scanf("%d",&size);

   printf("\n Enter array elements: ");
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
      */
     display();
   for(i=0;i<size;i++)
   {
       min_index=i;
       for(j=i+1;j<size;j++)
       {
            if(a[j]<a[min_index])   //i=0 j=1
            {
                 min_index=j;  //to find miu
            }
       }

       if(min_index != i) {

         printf("\n Items swapped: [ %d, %d ]\n" , a[i], a[min_index]);

         // swap the numbers
       int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
      }

      printf(" Iteration %d :",i+1);
      display();

   }

   printf("\n Sorted Array \n ");
   for(i=0;i<size;i++)
   {
       printf("%4d",a[i]);
   }

    return 0;
}
