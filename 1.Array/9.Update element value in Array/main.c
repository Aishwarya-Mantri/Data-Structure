#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("___________Program to update value in array_________ \n\n");
    int a[]={1,2,3,4,5};
    int i;
    int index;
    int value=11;
  printf("Array Elements:\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
    printf("\nEnter index whose value you wish to change\n");
    scanf("%d",&index);

    a[index]=value;

    printf("\nNew Array\n\n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }

    return 0;
}
