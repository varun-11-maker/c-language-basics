#include <stdio.h>
int fibonacci(int n);
main()
{
    int n;
    printf("enter the range:");
    scanf("%d",&n);
    fibonacci(n);
}
int fibonacci(int x)
{
    int next,i;
    int first=1,second=1;
    printf("%d %d ",first,second);
    for(i=0;i<x-2;i++)
    {
        next=first+second;
        first=second;
        second=next;
        printf("%d ",next);
    }
}
