#include<stdio.h>
int count(int a)
{
	int temp,c=0;
	temp=a;
	while(temp>0)
	{
		if(temp%10 == 4 || temp%10== 7 )
			c++;
			temp=temp/10;
	}
	return c;
}
int main()
{
	int n,k,d=0,c;
	scanf("%d %d",&n,&k);
	long long int arr[n],i,a;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		a=arr[i];
		c=count(a);
		if(c<=k)
			d++;
	}
	printf("%d",d);
return 0;
}
