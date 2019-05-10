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
#define all(v) v.begin(),v.end()
bool comp(string a,string b)
{
	return a.size()<b.size();
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n;
	vector<string> v,tempt;
	string s,ans="",suf="",pre="";
	lp(2*n-2)
	{
		cin>>s;
		v.pb(s);
		ans+="-";
		tempt.pb(s);
	}
	sort(all(tempt),comp);
	pre=tempt[tempt.size()-1];
	bool flag=1;
	for(ll i=tempt.size()-1;i>=0;i--)
	{
		if(pre.substr(0,tempt[i].size())!=tempt[i])
		{
			suf=tempt[i];
			flag=0;
			break;
		}
	}
	if(flag)
		suf=tempt[tempt.size()-1];
	set<string> en_pre;
	lp(2*n-2)
	{
		if(pre.substr(0,v[i].size())==v[i])
		{
			if(en_pre.find(v[i])==en_pre.end())
			{
				en_pre.insert(v[i]);
				ans[i]='P';
			}
			else
				ans[i]='S';
		}
		else
			ans[i]='S';
	}
	flag=1;
	reverse(all(suf));
	vector<ll> rev;
	lp(2*n-2)
		if(ans[i]=='P')
		{
			if(v[i]!=pre.substr(0,v[i].size()))
			{
				flag=0;
				break;
			}
		}
		else
		{
			reverse(all(v[i]));
			rev.pb(i);
			if(v[i]!=suf.substr(0,v[i].size()))
			{
				flag=0;
				break;
			}
		}
	if(flag)
	{
		cout<<ans<<endl;
		return 0;
	}
	for(ll i=0;i<rev.size();i++)
		reverse(all(v[rev[i]]));
	reverse(all(suf));
	swap(suf,pre);
	en_pre.clear();
	lp(2*n-2)
	{
		if(pre.substr(0,v[i].size())==v[i])
		{
			if(en_pre.find(v[i])==en_pre.end())
			{
				en_pre.insert(v[i]);
				ans[i]='P';
			}
			else
				ans[i]='S';
		}
		else
			ans[i]='S';
	}
	cout<<ans<<endl;
	return 0;
}
