#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Array Elements\n\n");
    int i,j,t;
    int a[8]={30,4,10,22,27,50,46,3};

    for(i=0;i<8;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Bubble Sort\n\n");
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(a[j]<a[i])
            {
               t= a[j];
               a[j]=a[i];
               a[i]=t;
            }
        }
    }
printf("Sorted Elements\n\n");
for(i=0;i<8;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
