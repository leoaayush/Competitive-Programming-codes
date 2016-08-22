#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,tmp;
		scanf("%d %d",&n,&k);
/*		while(i<n || j<n)
	{
			arr[i][j]=c;
			c++;
			j++;
			if(j=n)
			{
				j=0;
				i++;
			}	
		}*/
	int s=0,sum=0;
	s=k;
	sum=k;
	tmp=n-1;
	while(tmp--)
	{
		s+=n;
		sum=sum+s;
	}

	printf("%d\n",sum);
}
return 0;
}
