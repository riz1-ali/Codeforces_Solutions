#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,x,y;
	cin>>a>>b>>x>>y;
	ll g=__gcd(x,y);
	x/=g;
	y/=g;
	cout<<min(a/x,b/y)<<endl;
	return 0;
}