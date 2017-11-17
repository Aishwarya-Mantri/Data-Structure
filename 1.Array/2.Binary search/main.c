#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a[10],i,size,no,c=0,first,last,mid;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    printf("Enter the elements in ascending order: ");
    for(i=0;i<size;i++){
         scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&no);

    first=0,last=size-1;
    while(first<=last){
         mid=(first+last)/2;
         if(no==a[mid]){
             c=1;
             break;
         }
         else if(no<a[mid]){
             last=mid-1;
         }
         else
             first=mid+1;
    }
    if(c==0)
         printf("The number %d is not in array",no);
    else
         printf("The number %d is found",no);


    return 0;
}
