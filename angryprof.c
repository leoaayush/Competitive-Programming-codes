#include<stdio.h>
int main()
{
int n,k,c=0,t;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&k);
int arr[n];
int i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]<=0)
{
c++;
}
}
if(c>=k)
printf("NO");
else
printf("YES");
c=0;
}





return 0;
}
