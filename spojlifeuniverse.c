#include<stdio.h>
int main()
{
	int x;
	while(1)
	{
	scanf("%d",&x);
	if(x!=42)
		printf("%d\n",x);
		else
		break;
	}
	return 0;
}
