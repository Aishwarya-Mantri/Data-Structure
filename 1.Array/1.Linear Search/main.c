#include <stdio.h>
#include <stdlib.h>
//void search(int a[]);
search(int a[],int n)  //function prototype
{

    int i,flag=0;
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            printf("\n %d is an array element present at location %d",n,i+1);
            flag=1;
            break;
        }
       }
     if(flag==0)
     {
         printf("\n Number not found.\n");
     }
}
int main()
{
    int a[5];
    int i,n;
    printf("\n Enter Array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Elements");
    for(i=0;i<5;i++)
    {
        printf("\n%d\n",a[i]);

    }
    printf("\nEnter a number to search");
    scanf("%d",&n);
    search(a,n);  //function call
    return 0;
}
