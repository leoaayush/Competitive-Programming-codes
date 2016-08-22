#include<stdio.h>
int main()
{
	int n,q;
	scanf("%d %d",&n,&q);
	int arr[n], b[100000];
	int i,s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		s=s+arr[i];
		b[i]=s;
	}
	while(q--)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		
		printf("%d\n",b[r-1]-b[l-1]+arr[l-1]);
	}
return 0;
}
