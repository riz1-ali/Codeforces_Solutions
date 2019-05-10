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
ll get_pos(ll n)
{
	ll last_z=-1,k=n,i=0;
	while(k)
	{
		if(!(k%2))
			last_z=i;
		k/=2;
		i++;
	}
	return last_z+1;
}
ll powers(ll a,ll b)
{
	ll ans=1;
	while(b)
	{
		if(b%2)
			ans*=a;
		a*=a;
		b/=2;
	}
	return ans;
}
int main()
{
	// ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	ll n;
	cin>>n;
	set<ll> ps;
	ll k=1,x=0;
	while(k<=1e10)
	{
		ps.insert(k-1);
		k*=2;
	}
	ll op=0;
	k=n;
	vector<ll> act;
	while(op<40 and ps.find(k)==ps.end())
	{
		op++;
		if(op%2)
		{
			act.pb(get_pos(k));
			ll xov=powers(2,act[act.size()-1])-1;
			k^=xov;
			// cout<<k<<" - "<<xov<<endl;
		}
		else
			k+=1;
		// cout<<k<<" "<<op<<endl;
	}
	cout<<op<<endl;
	bool flag=0;
	for(ll i=0;i<act.size();i++)
	{
		cout<<act[i]<<" ";
		flag=1;
	}
	if(flag)	
		cout<<endl;
	return 0;
}
