#include<stdio.h>
int fact(int s)
{
	int h=1,j=1;
	for(h=1;h<=s;h++)
	{
		j=((j%(1000000007))*(h%(1000000007)))%(1000000007);
		
	}
	return j;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[1000002],b;
		int c[30];
		int d;
		scanf("%s",a);
		int k=0;
		int f=0;
		for(f=0;f<30;f++)
		{
			c[f]=0;
		}
		while(a[k]!='\0')
		{
			k++;
		}
		k++;
		int i;
		for(i=0;i<k;i++)
		{
			b=a[i];
			d=(int)b;
			c[d-97]++;
		}
		int g=0;
		int ans=1;
		for(i=0;i<30;i++)
		{
			if(c[i]>0)
			{
				g++;
				ans=ans*fact(c[i]);
			}
		}
		ans=ans*fact(g);
	printf("%d\n",ans);
	}
	return 0;
}
