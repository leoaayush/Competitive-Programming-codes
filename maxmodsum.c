#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		int arr[n];
		int i,j;
		for(i=0;i<n;i++)
		{	
			scanf("%d",&arr[i]);
		}
/*		  for(i=0;i<n;i++)
                {
                        printf("%d",arr[i]);
                }*/

		int max=0;
		int s=0,r,c,k;
		for(i=0;i<n;i++)
		{	k=i;	
			c=0;
			for(j=0;j+i<n;j++){
				while(c<k+1){
					s=s+arr[j];
					j++;
					c++;}
				r=s%m;
				if(r>max)
				{
					max=r;
				}
				s=0;
				c=0;	}}
		printf("%d\n",max);
	}
return 0;
}
