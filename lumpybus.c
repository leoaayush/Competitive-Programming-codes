#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,i,n;
	scanf("%d",&t);
	int arr[n];
	while(t--)
	{
		int p,q,c=0;
		scanf("%d %d %d",&n,&p,&q);
	//	int arr[n];
	//	int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			}
		int compar(const void *a , const void *b)
		{
			return (*(int *)a- *(int *)b);
			}

		qsort(arr,n,sizeof(int),compar);
		int tmpp,tmpq,k=0;
		tmpp=p;
		tmpq=q;
		while(tmpp>0)
			{
				if(arr[k]==1)
					{
						c++;
						k++;
						tmpp--;
					}
					
				else
					{break;}
			}
		int tmp;
		for(i=k;i<n;i++)
		{
			tmp=arr[k];
			do
				{
					tmp=tmp-2;
					tmpq--;
				}
				while(tmp>0 && tmpq >0);
				if(tmp==0)
					c++;
					else
					{
						do
						{
							tmp=tmp-1;
							tmpp--;
						}
						while(tmp>0 && tmpp >0)
							if(tmp==0)
								c++;
								else

			
	return 0;
}
