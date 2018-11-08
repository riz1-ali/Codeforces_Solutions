#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll x,y,x1=0,y1=0;
	cin>>x>>y;
	if(x>0 && y<2)
	{
		cout<<"No\n";
		return 0;
	}
	y--;
	x-=y;
	if(x%2==0 && x>=0)
		cout<<"Yes\n";
	else
		cout<<"No\n";
 	return 0;
}