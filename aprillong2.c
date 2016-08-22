#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int r,g,b,k,c=0;
		scanf("%lld %lld %lld",&r,&g,&b);
		scanf("%lld",&k);
		if(k==1)
			printf("1\n");
			else{
				
				while(k-1>0)
				{
					if(b>0)
					{	c++;
					b--;}	
					if(g>0)
					{
						c++;
						g--;
					}
					if(r>0)
					{c++;
					r--;}
				k--;
				}
				c++;
				printf("%lld\n",c);
			}
	}
	return 0;
}
