#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i] == -99)
			continue;
		for(j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{arr[i]=-99;
				arr[j]=-99;
			}}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]!=-99)
			break;
	}
	printf("%d",arr[i]);
	return 0;
}
