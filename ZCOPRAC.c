#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int arr[n];
long long int i,c=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	long long int s1[n];	
	long long int x,j;
	for(j=0;j<n;j++)
	{
		x=arr[j];
//		printf("%lld\n",x);
		for(i=0;i<n;i++)
		{
			
			if(x<=arr[i])
			c++;
		}
	s1[j]=c*x;
c=0;	
//printf("%lld\n",s1[j]);
}
	long long int max,k=0;
	max=s1[0];
	while(k<n)
	{
		if(s1[k]>max)
			max=s1[k];
			k++;
	}
	printf("%lld",max);

return 0;
}
