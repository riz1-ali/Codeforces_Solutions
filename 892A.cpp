#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,s=0,i,a;
	cin>>n;
	long long int b[n];
	for(i=0;i<n;i++)
	{
		cin>>a;
		s+=a;
	}
	for(i=0;i<n;i++)
		cin>>b[i];
	sort(b,b+n);
	if(s<=b[n-1]+b[n-2])
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}