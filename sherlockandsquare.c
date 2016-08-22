#include<stdio.h>
#include<math.h>
int main()
{
int t,c=0;
scanf("%d",&t);
long int a,b,i;
while(t--)
{
scanf("%ld %ld",&a,&b);
for(i=a;i<=b;i++)
{
if((floor(sqrt(i)))==(ceil(sqrt(i))))
c++;
}
printf("%d\n",c);
c=0;
}
return 0;
}















