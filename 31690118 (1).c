#include<stdio.h>
#include<string.h>
main ()
{
    
    int i,t,j,k,min,max;
    char a[101],b[101];
    scanf("%d",&t);
    while(t--)
    {
        min=0,max=0;
        scanf("%s%s",a,b);
        for(i=0;i<strlen(a);i++)
           {
               if(a[i]=='?'||b[i]=='?')
               {
                   max++;
               }
               else if(a[i]!=b[i])
               {
                   max++;
                   min++;
               }
           }        printf("%d %d\n",min,max);
    }return 0;
}

