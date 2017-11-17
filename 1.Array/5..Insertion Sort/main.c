#include <stdio.h>
#include <stdlib.h>
int array[7]={21,10,15,88,95,5,7};

void display()
{
    int size=7,i,j,min_index;
    //int a[30];
    for(i=0;i<size;i++)
   {
       printf("%4d",array[i]);
   }
   printf("\n");

}
int main()
{
    int n=7, i, j, t;
    printf("\n Array elements:\n");
    display();

   /* printf("\n Enter number of elements\n");
    scanf("%d", &n);

    printf("\n Enter %d integers \n\n", n);

    for (i = 0; i < n; i++) {
    	scanf("%d", &array[i]);
    }
*/
    for (i = 1 ; i <= n - 1; i++) {

         j = i;

        while ( j > 0 && array[j] < array[j-1]) {
            t          = array[j];
            array[j]   = array[j-1];
            array[j-1] = t;
            j--;
            printf("\n Iteration %d:",i);
            display();
        }
    }

    printf("\n Sorted list in ascending order:\n");

    for (i = 0; i <= n - 1; i++) {
   	 printf("%d\n", array[i]);
    }

    return 0;
}
