#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		if(n>=k)
		printf("YES\n");
		else 
		{
			while((n>0)&&(n!=k))
			{
				if(n>=k)
				break;	
				k=k-n;
				n=n-1;
			}
			if(n>=k)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
return 0;
}
			
		
