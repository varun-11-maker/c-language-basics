#include <stdio.h>
main()
{
    int arr[200],temp,n,i,j,k;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(arr[k]<arr[j])
              {
                  temp=arr[j];
                  arr[j]=arr[k];
                  arr[k]=temp;
              }

        }
    }
    printf("sorted array is \n");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
