#include<stdio.h>
#include<math.h>
int main()
{
int t,c=0;
scanf("%d",&t);
long int a,b,i,k;
while(t--)
{
scanf("%ld %ld",&a,&b);
for(i=a;i<=b;i++)
{
if((floor(sqrt(i)))==(ceil(sqrt(i))))
break;
}
if(i<=b)
{k=sqrt(i);
while((k*k)<=b)
{
c++;
k++;
}
}
printf("%d",c);
c=0;



}
return 0;
}

