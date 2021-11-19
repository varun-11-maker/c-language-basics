#include <stdio.h>
main()
{
    int arr[50],i,n,loc,element;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("enter the location at which the element has to be deleted\n");
    scanf("%d",&loc);
    for(i=loc;i<n;i--)
    {
        arr[i]=arr[i+1];
        }
    // arr[loc]=element;
    if (loc>n&&loc<0)
    {
        printf("invalid entry");
    }
    else{
    for(i=loc;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
}
