#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		float cmin,cmax;
		int g,s;
		if (a>b)
		{
			g=a;
			s=b;

		}
		else
		{
			g=b;
			s=a;
		}
		cmin=sqrt((g*g)-(s*s));
		cmax=sqrt((g*g)+(s*s));
		printf("%f %f \n",cmin,cmax);
	}
	return 0;
}

