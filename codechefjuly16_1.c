#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{//	printf("Working\n");
		 int n;
		 int arr[n],i,s=0;
		int k=0,f=0;
		float avg;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			s+=arr[i];
			if(arr[i]==2)
				k=1;
			if(arr[i]==5)
				f++;	
		}
		if(f==0)
			k=1;

		avg=s/n;
		if(avg<4)
			k=1;
		if(k==1)
			printf("NO\n");
			else
				printf("YES");
	}
	return 0;
}
