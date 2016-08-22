#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int s=0;
		int arev=0,brev=0;
		while(a>0)
		{
			arev=arev*10;
			arev=arev+a%10;
			a=a/10;
		}
		while(b>0)
		{
			brev=brev*10;
			brev=brev+b%10;
			b=b/10;
		}
		s=arev+brev;
		int srev=0;
		while(s>0)
		{
			srev=srev*10;
			srev=srev+s%10;
			s=s/10;
		}
printf("%d\n",srev);	}
return 0;
}

