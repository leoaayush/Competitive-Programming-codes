#include<stdio.h>
void main()
{
int t,j=0,rem;
scanf("%d",&t);
long long int arr[t];
int i,maxsize[t],maxrem[j];
for(i=0;i<t;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<t;j++)
{
for(i=1;i<arr[j];i++)
{
rem=arr[j]%i;
if(i==1)
{
maxrem[j]=rem;}
if(rem>maxrem[j])
{maxsize[j]=i;
}
}
}
for(j=0;j<t;j++)
{printf("%d\n",maxsize[j]);
}


}
