#include <stdio.h>
int main()
{
    int arr[50],i,n,a,c;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to be searched\n");
    scanf("%d",&a);
     for(i=0;i<n;i++)
     {
         if (arr[i]==a)
         {
             c=1;
         }
     }
     if(c==1)
     {
         printf("number exist");
     }
     else
        printf("number doesn't exist");
}

