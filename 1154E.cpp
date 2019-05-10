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
struct comp{
	bool operator()(pll a,pll b)
	{
		return a.f<b.f;
	}
};
struct comp2{
	bool operator()(pll a,pll b)
	{
		return a.f>b.f;
	}
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	set<pll,comp2> st;
	set<pll,comp> t2;
	string ans;
	lp(n)
	{
		cin>>arr[i];
		st.insert(mp(arr[i],i));
		t2.insert(mp(i,arr[i]));
		ans+='-';
	}
	bool turn=1;
	while(!st.empty())
	{
		turn=!turn;
		pll cur=*(st.begin());
		st.erase(cur);
		char mark;
		if(turn)
			mark='2';
		else
			mark='1';
		set<pll,comp>::iterator it=t2.find(mp(cur.s,cur.f));
		ll c=0;
		set<pll,comp> temp;
		for(;it!=t2.end() and c<=k;it++)
		{
			c++;
			ans[it->f]=mark;
			st.erase(mp(it->s,it->f));
			temp.insert(*it);
		}
		it=t2.find(mp(cur.s,cur.f));
		c=0;
		for(;it!=t2.begin() and c<=k;it--)
		{
			c++;
			ans[it->f]=mark;
			st.erase(mp(it->s,it->f));
			temp.insert(*it);
		}
		if(c<=k and it==t2.begin())
		{
			ans[it->f]=mark;
			st.erase(mp(it->s,it->f));
			temp.insert(*it);
		}
		for(auto it:temp)
			t2.erase(it);
	}
	cout<<ans<<endl;
	return 0;
}
