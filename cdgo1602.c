#include<stdio.h>
int main()
{

	int t;
	scanf("%d",&t);
	while(t--)
	{

		int n;
		scanf("%d",&n);

		
	int m,f;
	scanf("%d %d",&m,&f);
		
		int i;
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int mw=0,fw=0;
		for(i=0;i<n;i++)
		{
			if( arr[i]>0 && arr[i]%m==0)
				mw++;

			if(arr[i]>0 && arr[i]%f==0)
				fw++;
		}
	//	printf("%d\n",mw);
	//	printf("%d\n",fw);
		float a;
		a=(float)(mw+fw);
		a=a/n;
		if(a>= 0.70)
		{
			printf("YES\n");
			if(mw==fw)
				printf("BOTH\n");
				else if(mw>fw)
					printf("MULTAN\n");
					else
						printf("SULTAN\n");
		}
		else
			printf("NO\n");
}
return 0;
}
