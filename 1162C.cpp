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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll arr[k],mark[n];
	vector<ll> que[n];
	lp(n)
		mark[i]=0;
	lp(k)
	{
		cin>>arr[i];
		que[arr[i]-1].pb(i);
		mark[arr[i]-1]++;
	}
	ll ans=0;
	lp(n)
	{
		if(!mark[i])
		{
			ans+=3;
			if(i==0 or i==n-1)
				ans--;
			continue;
		}
		if(i==0)
		{
			if(i+1<=n-1)
			{
				if(!mark[i+1])
				{
					ans++;
					continue;
				}
				ll our_p=que[i][0],opp=que[i+1][que[i+1].size()-1];
				if(our_p>opp)
					ans++;
			}
			continue;
		}
		else if(i==n-1)
		{
			if(i-1>=0)
			{
				if(!mark[i-1])
				{
					ans++;
					continue;
				}
				ll our_p=que[i][0],opp=que[i-1][que[i-1].size()-1];
				if(our_p>opp)
					ans++;
			}
			break;
		}
		if(!mark[i+1])
			ans++;
		else
		{
			ll our_p=que[i][0],opp=que[i+1][que[i+1].size()-1];
			if(our_p>opp)
				ans++;
		}
		if(!mark[i-1])
			ans++;
		else
		{
			ll our_p=que[i][0],opp=que[i-1][que[i-1].size()-1];
			if(our_p>opp)
				ans++;

		}
	}
	cout<<ans<<endl;
	return 0;
}
