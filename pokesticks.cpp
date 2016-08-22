#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int g=n/2;
	int arr1[g];
	
	for(i=0;i<g;i++)
	{
		arr1[i]=-1;
	}
	i=n-1;
	int k=0;
	while(i>=0)
	{
		if(arr[i]==arr[i-1])
		{	arr1[k++]=arr[i];
			i=i-2;
		}
		else
			i--;
	}
	int c=0,p=1;
	for(i=0;i<g;i++)
	{
		if(arr1[i]!=-1)
			c++;
	}
	if(c>=2)
	{
		p=p*arr1[0]*arr1[1];
		
	cout<<p<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}}
return 0;
}
