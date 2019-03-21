#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll n;
	cin>>n;
	string left,right;
	cin>>left>>right;
	ll leftc[27],rightc[27];
	bool travl[n],travr[n];
	lp(27)
		leftc[i]=rightc[i]=0;
	vector<ll> posl[27],posr[27];
	lp(n)
	{
		travl[i]=0;
		if(left[i]=='?')
		{
			leftc[26]++;
			posl[26].pb(i);
		}
		else
		{
			leftc[left[i]-'a']++;
			posl[left[i]-'a'].pb(i);
		}
	}
	lp(n)
	{
		travr[i]=0;
		if(right[i]=='?')
		{
			rightc[26]++;
			posr[26].pb(i);
		}
		else
		{
			rightc[right[i]-'a']++;
			posr[right[i]-'a'].pb(i);
		}
	}
	// lp(27)
	// 	cout<<leftc[i]<<" ";
	// cout<<endl;
	// lp(27)
	// 	cout<<rightc[i]<<" ";
	// cout<<endl;
	vector<pll> ans;
	lp(26)
	{
		if(leftc[i]>0 and rightc[i]>0)
		{
			ll val=min(leftc[i],rightc[i]);
			for(ll j=0;j<val;j++)
			{
				travl[posl[i][j]]=1;
				travr[posr[i][j]]=1;
				ans.pb(mp(posl[i][j],posr[i][j]));
			}
		}
	}
	vector<ll> reml,remr,ql,qr;
	lp(n)
		if(!travl[i])
		{
			if(left[i]!='?')
				reml.pb(i);
			else
				ql.pb(i);
		}
	lp(n)
		if(!travr[i])
		{
			if(right[i]!='?')
				remr.pb(i);
			else
				qr.pb(i);
		}
	for(ll i=0;i<qr.size();i++)
		remr.pb(qr[i]);
	for(ll i=0;i<reml.size();i++)
		ql.pb(reml[i]);
	for(ll i=0;i<ql.size();i++)
		if(left[ql[i]]=='?' or right[remr[i]]=='?')
			ans.pb(mp(ql[i],remr[i]));
	cout<<ans.size()<<endl;
	for(ll i=0;i<ans.size();i++)
		cout<<ans[i].f+1<<" "<<ans[i].s+1<<endl;
	return 0;
}
