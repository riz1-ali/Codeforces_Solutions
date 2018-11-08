#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,q,l,r,i,j,ans;
	cin>>n>>m>>q;
	string s,t;
	cin>>s>>t;
	bool part[n]={false};
	lpi(i,t.size()-1,n-1,1)
	{
		if(s.substr(i-t.size()+1,t.size())==t)
			part[i]=1;
	}
	while(q--)
	{
		cin>>l>>r;
		l--;
		r--;
		ans=0;
		lpi(j,l+t.size()-1,r,1)
		{
			if(part[j])
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}