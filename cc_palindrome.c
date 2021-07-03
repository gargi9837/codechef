#include <stdio.h>

int main(void) {
	int T,i,n,giv,rev=0;
	scanf("%d",&T);
	
	for(i=1;i<=T;i++)
	{
	    int temp;
	    scanf("%d",&giv);
	    n = giv;
	    while(n!=0)
	    {
	        temp = n % 10;
	        rev = rev * 10 + temp;
	        n = n/10;
	    }
	    
	    if(rev == giv)
	    {
	        printf("wins\n");
	    }
	    
	    else
	    {
	        printf("loses\n");
	    }
	    
	    rev = 0;
	}
	return 0;
}
