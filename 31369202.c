#include <stdio.h>

int main(void) {
	int t,i,k;
	scanf("%d",&t);
	while(t--)
	{
	    k=0;
	    scanf("%d",&i);
	    while(i>0)
	    {
	        if(i%10==4)
	        {
	            k++;
	        }i=i/10;
	    }printf("%d\n",k);
	    
	}
	return 0;
}

