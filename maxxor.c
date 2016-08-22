#include<stdio.h>
int main()
{
	int l,r;
	scanf("%d",&l);
	scanf("%d",&r);
	int i,ans,max=0,j,k;
	j=l;
	k=r;
	while(j<=k)
	{
		for(i=l;i<=r;i++)
		{
			ans=j^i;
			if(ans>max)
			{max=ans;
			}
		}
		j++;
	}
	printf("%d",max);
	return 0;
}

