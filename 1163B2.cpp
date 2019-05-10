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
map<ll,ll> counts,occur;
set<ll> cur;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ans=1,a;
	cin>>n;
	lp(n)
	{
		cin>>a;
		counts[a]++;
		if(occur[counts[a]-1]>0)
			occur[counts[a]-1]--;
		// cout<<"-> "<<occur[counts[a]-1]<<" "<<counts[a]-1<<endl;
		if(occur[counts[a]-1]==0 and cur.find(counts[a]-1)!=cur.end())
			cur.erase(counts[a]-1);
		// cout<<"-----------\n";
		// for(auto it:cur)
		// 	cout<<it<<" ";
		// cout<<endl;
		// cout<<"+++++++++++\n";
		occur[counts[a]]++;
		cur.insert(counts[a]);
		if(cur.size()==1)
		{
			if(occur[*cur.begin()]==1 or *cur.begin()==1)
				ans=max(ans,i+1);
		}
		else if(cur.size()==2)
		{
			a=*cur.begin();
			auto it=cur.begin();
			it++;
			if((abs(*it - a)==1 and occur[*it]==1) or (a==1 and occur[a]==1))
				ans=max(ans,i+1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
