#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b,c;
		cin>>a>>b>>c;
		long long int d;
		d=(long long int )a;
		int s=0,k=0;
		long long int temp=d;
		while(temp!=0)
		{
			s=s+pow(10,k)*(temp%16);
			temp=temp/16;
			k++;
			
		}
		cout<<"0x"<<s<<endl;
		
		
















	}
	return 0;
}

