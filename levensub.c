#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		int i,l;
		l=n;
		int s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			s+=arr[i];
		}
		int k=0;
		while(l>=0)
		{
			if(s%2 == 0)
				{
					printf("%d\n",l);
					break;
				}
				l=l-1;
				if(arr[k] % 2 ==0 && arr[l] %2 ==0)
				{
					k++;
					continue;
				}
				else
				{
					s=s-1;
				}
		}
	}
	return 0;
}
