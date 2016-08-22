#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	long long int n,tc=0;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	int w,y;
	cin>>w>>y;
	sort(arr,arr+n);
	if(w<y)
		cout<<"Not Possible"<<endl;
	else if (w==0)
		cout<<"0"<<endl;
	else{
	int temp;
	temp=y;
	tc=arr[0]*(w-y+1);
	temp--;
	while(temp>0)
		{
			tc=tc+arr[y-temp];
			temp--;
		}
	
	cout<<tc<<endl;
}}
return 0;
}
