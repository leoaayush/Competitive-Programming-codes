#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		int i,sl=0,sr=0;
		int c=0,x,j;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			x=i;
			for(j=0;j<x;j++)
			{
				sl+=arr[j];
			}
			for(j=x+1;j<n;j++)
			{
				sr+=arr[j];
			}
			
			if(sl==sr){
			c++;
			break;	}
			sl=0;
			sr=0;
		}
		if(c>0)
		printf("YES\n");
		else
		printf("NO\n");
	}
return 0;
	}	
