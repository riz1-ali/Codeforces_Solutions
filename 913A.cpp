#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,ans=1,k;
	cin>>n>>m;
	if(n>=27)
		cout<<m<<endl;
	else
	{
		k=pow(2,n);
		cout<<m%k<<endl;
	}
	return 0;
}