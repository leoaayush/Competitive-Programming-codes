#include <stdio.h>
#include<stdlib.h>
 void merge(int *a,int *b,int *c,int n,int m)
{
	int i=0,j=0,k=0;
	while(i<n&&j<m){
        if(b[i]<c[j]){
            a[k++]=b[i++];
        }
        else{
            a[k++]=c[j++];
        }
	}
	while(i<n){
        a[k++]=b[i++];
	}
	while(j<m){
        a[k++]=c[j++];
	}
}

void mergesort(int *a,int n)
{
    if(n<2){
        return;
    }
	int mid=n/2,*b,j;
	b=(int *)malloc(n*sizeof(int));
	mergesort(a,mid);
	mergesort(a+mid,n-mid);
	merge(b,a,a+mid,mid,n-mid);
	for(j=0;j<n;j++){
        a[j]=b[j];
	}
	free(b);

}
int main()
{
    int t;
    	scanf("%d",&t);
		while(t--)
    	{int n;
    		scanf("%d",&n);
    		int a[n],b[n];
    		int i,t;
    			for(i=0;i<n;i++)
    			{
    					scanf("%d",&a[i]);
    			}
    			int j,x,k=0;
   			mergesort(a,n);
			
			b[0]=a[0];
    			for(i=1;i<n;i++)
    			{
    				if(a[i]!=b[k])
    					{
    						b[++k]=a[i];
    					}
    				
    			}
    		//	for(i=0;i<=k;i++)
    		//	{
    		//		printf("%d ",b[i]);
			//	} 
				
				int c,d;
    			c=0;
    			d=k;
    			while(c<d)
    			{
    				printf("%d ",b[d]);
    				printf("%d ",b[c]);
    				c++;
    				d--;
    			}
    							
    			
    			
    				
    	}
    return 0;
}
