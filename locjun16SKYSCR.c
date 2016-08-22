#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,b,c;
		scanf("%lld %lld",&a,&b);
		if(a>=b)
			c=a-b;
			else
				c=b-a;
		printf("%lld\n",c);
	}
	return 0;
	}
