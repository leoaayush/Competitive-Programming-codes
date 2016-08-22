#include<stdio.h>
int check(int n ,int arr1[][n])
{//	printf("Working123\n");
	int j=0,d=0;
	for(j=0;j<n;j++)
	{//	printf("%d\n",arr1[1][j]);
		if(arr1[1][j]==2)
			d++;
	}
//	printf("WORKING\n");
	if(d>0)
		d=0;
		else
		d=1;
return d;	
}
		
int main()
{
	int t,e;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[2][n];
		int i=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[0][i]);
		}
		for(i=0;i<n;i++)
		{
			arr[1][i]=0;
		}
	//	printf("ARR OS %d\n",arr[1][0]);
		int x;
		int count=0;
		int k;
		int g;
		for(i=0;i<n;i++)
		{	k=i;
			arr[1][i]=arr[1][i]+1;
			
			
			do{
			x=arr[k][i];
	//	printf("WORKING\n");	
			while(x--)
			{k++;
				if(k==n)
					k=0;
			}
	//		printf("WORKING\n");
			if(k==n-1)
				k=0;
			else
				k++;
			arr[1][k]=arr[1][k]+1;
		//	printf("WORKING\n");
		//	printf("ARR %d\n",arr[1][0]);
			g=check(n,arr);
		//	printf("WFING\n");
		//	printf("%d\n",g);
			}while(g!=0);
		if(arr[1][i]==2)
			count++;
			else
			{
				for(e=0;e<n;e++)
				{
					arr[0][e]=0;
				}
			}}
		printf("%d\n",count);}
		return 0;
}
