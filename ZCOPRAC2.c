#include<stdio.h>
int main()
{
	int w,h;
	scanf("%d %d",&w,&h);
	int arr[w];
	int i;
	for(i=0;i<w;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a[100000];
	int x,c=-1;
	while(1)
	{
		scanf("%d",&x);
		if(x==0)
			break;
			a[++c]=x;
	}
	int currentpos=0;
	int cb=0;
	i=0;
	while(i<=c)
	{
		switch(a[i])
		{
			case 1: if(currentpos !=0)
				{	printf("p\n");
					currentpos--;
				
				}
				break;
			case 2: if(currentpos != w-1)
				{	printf("p\n");
					currentpos++;
				}
				break;
			case 3: 
				
				if(arr[currentpos] !=0 && cb==0)
				{	printf("p\n");
					arr[currentpos]--;
					cb==1;
				}
				else
				{
					printf("F\n");
				}
				break;
			case 4:
				if(arr[currentpos]<h && cb==1)
				{
					printf("p\n");
					arr[currentpos]++;
					cb==0;
				}
				else
				{
					printf("F\n");}
				break;
			}
		//	printf("%d\n",a[i]);
			i++;
	}
	i=0;
	while(i<w)
	{
//		printf("%d ",arr[i]);
i++;	}
	return 0;
}
