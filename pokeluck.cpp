#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a , b;
	cin>>a>>b;
	int arr[a+1][a+1];
	arr[0][0]=0;
	int i,x,y;
	for(i=0;i<b;i++)
	{
		cin>>x>>y;
		arr[x][y]=1;
		arr[y][x]=1;
	}
	int luck[a];
	int k=1,j=1,g;
	for(g=2;g<=a;g++)
	{
	for(i=1;i<=a;i++)
	{
		if(arr[g][i]==1)
			{luck[g]=k;
			k++;
			break;}
	
	
		
	}}		
	for(i=2;i<=a;i++)
	{
		cout<<luck[i]<<endl;
	}
	return 0;
}
