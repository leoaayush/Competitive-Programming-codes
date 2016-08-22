#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,c=0;
		scanf("%lld",&n);
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		int t;
		if(arr[1]>arr[0])
			t=1;
		else
			t=0;
		for(i=1;i+1<n;i++)
		{
			if(arr[i+1]>arr[i])
			{
				if(t==0)
					c++;
				t=1;
			}
			else
			{
				if(t==1)
					c++;
				t=0;
			}
		}
		printf("%lld",c);
	}
	return 0;
}
