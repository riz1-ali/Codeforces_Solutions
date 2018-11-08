#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(0);
	ll a,b,c,d,e,i;
	cin>>a>>b>>c>>d>>e;
	ll arr[e+1];
	for(i=1;i<=e;i++)
		arr[i]=0;
	for(i=a;i<=e;i+=a)
		arr[i]=1;
	for(i=b;i<=e;i+=b)
		arr[i]=1;
	for(i=c;i<=e;i+=c)
		arr[i]=1;
	for(i=d;i<=e;i+=d)
		arr[i]=1;
	ll ans=0;
	for(i=1;i<=e;i++)
		if(arr[i]==1)
			ans++;
	cout<<ans<<endl;
	return 0;
}