#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,q;
	cin>>n>>q;
	set<int>id;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		id.insert(arr[i]);
	}
	int carr[q];
	for(i=0;i<q;i++)
	{
		cin>>carr[i];
	}
	int d;
	for(i=0;i<q;i++)
	{
		d=count(const carr[i])
		if(d==0)
		{
			cout<<"NO"<<endl;
			id.insert(carr[i]);
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	}
	return 0;
}
