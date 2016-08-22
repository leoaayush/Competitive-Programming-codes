#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,tmp;
		scanf("%lld",&a);
		int c=0,r;
		tmp=a;
		while(tmp>0)
		{
		
			r=tmp%10;
			tmp=tmp/10;
			if(r==4)
				c++;
			
		}
		printf("%d\n",c);
	}
	return 0;
}
