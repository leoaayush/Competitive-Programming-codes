#include<stdio.h>
int main()
{
	printf("WORKING");
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int m,n;
		scanf("%lld %lld",&m,&n);
		int arr[100000000000],arr1[100000000000];
		int i=0,j=0;
		arr[0]=1;
		arr[1]=1;
	/*	for(i=2;i<=m;i++)
		{
			arr[i]=0;
		}
		for(i=2;i<=m;i++)
		{
			if(arr[i]==0)
			{
				for(j=i*i;j<=m;j=j+i)
				{
					arr[j]=1;
				}
			}
		}*/
		arr1[0]=1;
		arr1[1]=1;
		for(i=2;i<=n;i++)
		{
			arr1[i]=0;
		}
		for(i=2;i*i<=n;i++)
		{
			if(arr1[i]==0)
			{
				for(j=i*i;j<=n;j=j+i)
				{
					arr1[j]=1;
				}
			}
		}
		for(i=m;i<=n;i++)
		{
			if(arr1[m]==0)
				printf("%d\n",i);
		}
		printf("\n");	}
		return 0;
}
