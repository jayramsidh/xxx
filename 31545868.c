#include<stdio.h>
main ()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n=(n-2)/2;
        printf("%d\n",n*(n+1)/2);
    }
    return 0;
}