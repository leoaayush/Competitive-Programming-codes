#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,m;
		scanf("%lld %lld",&n,&m);
		if(n%2!=0 && m%2!=0)
		{
			printf("No\n");
		}
		else
			printf("Yes\n");
	}
	return 0;
}
