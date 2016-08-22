#include<stdio.h>
void main()
{
int max1,max2,n,y;
printf("no of array elements");
scanf("%d",&n);
int a[n];
scanf("%d",&a[0]);
scanf("%d",&a[1]);
max1=a[0];
max2=a[1];
if(max2<max1)
{
y=max1;
max1=max2;
max2=y;
}
int i;
for(i=2;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max2)
{
max1=max2;
max2=a[i];
}
if ((a[i]<max2) && (a[i]>max1))
{
max1=a[i];
}
}
printf("%d",max1);
printf("Max product is %d",max1*max2);


}

