#include <stdio.h>
int sum(int x)
{
	return (x*(x+1)/2);
}
int main()
{
	int t,res,n,i,j;
	scanf("%d",&t);
	
	while(t--)
	{
		res=0;
		i=0;
		scanf("%d",&n);
		if(n<0)
		{
			n=-n;
		}
		
		while(1)
		{
			i=sum(res);
			if(((i-n)%2)>0 || (i < n) )
			{
				res=res+1;
			}
			else
				break;
		}
		
		printf("%d\n",res);
		
	}
    
    return 0;
}
