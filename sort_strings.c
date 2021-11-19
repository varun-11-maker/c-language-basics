#include <stdio.h>
main()
{
    char str[5][10],s[10];
    int i,b,r;
    printf("enter 5 names\n");
    for(i=0;i<=4;i++)
    {
        gets(str[i]);
    }
     for(b=1;b<=4;b++)
     {
         for(i=0;i<=4-b;i++)
         {
             r=strcmp(str[i],str[i+1]);
             if(r>0)
             {
                strcpy(s,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],s);
            }
         }
     }

    printf("string in ascending order\n");
    for(i=0;i<=4;i++)
        puts(str[i]);
}
