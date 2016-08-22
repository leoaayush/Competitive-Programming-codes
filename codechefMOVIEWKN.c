#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int l[n];
		int r[n];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&l[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&r[i]);
		}
		int mul[n];
		for(i=0;i<n;i++)
		{
			mul[i]=l[i]*r[i];
		}
		int max;
		max=mul[0];
		for(i=1;i<n;i++)
		{	
			if(mul[i]>=max)
				max=mul[i];
		}
		int k=0;
		int arr[n];
		for(i=0;i<n;i++)
		{
			if(mul[i]==max)
				arr[k++]=i;
		}
		int arr1[n];
		int f=0;
		int max1;
		max1=r[arr[0]];
		for(i=0;i<k;i++)
		{
			if(r[arr[i]]>max1)
				max1=r[arr[i]];
