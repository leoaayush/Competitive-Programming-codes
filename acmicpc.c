#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int arr[n][m],max,count=0;
	int i,j,p[n],s[n-1];
	for(i=0;i<n;i++)
	{
		p[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			if(arr[j][i] == 1)
			{
				p[j]++;
				
			}
		}
	}
//	for(k=0;k<n;k++)
//	{
//	for(i=0;i<m;i++)
//	{
//		if(arr[k][i] == 0)
//			{
//				for(j=1;j<n;j++)
//				{
//					if(arr[j][i]==1)
//					{s[k]++;
//					}
//				}
//			}
//	}
//	}
	max=s[0];
	for(i=1;i<n-1;i++)
	{
		if(s[i]>max)
		{max=s[i];}
	}
	printf("%d\n",max);
	for(i=0;i<n-1;i++)
	{

		if(s[i]==max)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
