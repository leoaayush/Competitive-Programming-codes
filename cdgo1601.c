#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int l,b;
		scanf("%d %d",&l,&b);
		int g,s;
		if(l>b)
		{
			g=l;
			s=b;
		}
		else{
			g=b;
			s=l;
		}
		int i,tmp;
		while(g!=s && n>0)
		{
			tmp=g-s;
			if ( tmp>s)
			{
				g=tmp;
			}
			else
			{
				g=s;
				s=tmp;
			}
			n--;
		}
		if(n!=0)
			printf("NO\n");
			else
				printf("YES%d\n",g*s);
	}
	return 0;
}
