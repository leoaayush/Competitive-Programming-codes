#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int arr[n];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		//printf("This is %d\n",arr[0]);
		int c[n];
		for(i=0;i<n;i++)
		{
			c[i]=0;
		}
		int op=0;
		int j;
		for(i=0;i<n;i++)
		{
			if(arr[i]==i+1)
				continue;
			else
			{
			for(j=0;j<n;j++)
			{	//printf("%d\n",arr[0]);
				//printf("WORKING\n");
			//	printf("%d   %d\n",arr[j],i+1);
				if(arr[j]==i+1)
					c[i]++;

			}
		//	printf("c[%d] is %d\n",i,c[i]);
			if(c[i]>=k)
				op++;
			}

			
			}
		printf("%d\n",op);
	}
	return 0;
}
