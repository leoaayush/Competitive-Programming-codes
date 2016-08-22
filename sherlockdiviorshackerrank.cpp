#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,c=0;
		cin>>n;
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0 && i%2==0)
				c++;
		}
		if(n%2==0)
			c++;
		cout<<c<<endl;
	}
	return 0;
}
