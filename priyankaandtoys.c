#include<stdio.h>
#include <math.h>
int * sort(int a[],int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
return a;
}
int main()
{
	int n;
	int arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int *p,c=0;
	p=sort(arr,n);
	for(i=0;i<n;i++)
	{
		
		if(p[i]!=-99)
		{	c++;
			for(j=i+1;j<n;j++)
			{
				if(abs(p[j]-p[i]) <=4)
					p[j]=-99;
			}		
		}
	}
	printf("%d",c);
return 0;
}

