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
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ec=0;
	cin>>n;
	string s;
	cin>>s;
	ll moves=n-11,dup;
	dup=moves/2;
	ll dup2=dup;
	lp(n)
		if(s[i]=='8')
			ec++;
	bool turn=0;
	while(moves--)
	{
		turn=!turn;
		if(!turn)
		{
			if(ec>0)
				ec--;
			else
			{
				cout<<"NO\n";
				return 0;
			}
		}
	}
	string t=s;
	vector<ll> erases;
	for(ll i=0;i<n;i++)
	{
		if(s[i]=='8')
		{
			dup--;
			erases.pb(i);
			if(dup==0)
				break;
		}
	}
	reverse(erases.begin(),erases.end());
	for(auto it:erases)
		t.erase(t.begin()+it);
	for(ll i=0;i<dup2;i++)
		if(t[i]=='8')
		{
			cout<<"YES\n";
			return 0;
		}
	if(t[dup2]=='8')
	{
		cout<<"YES\n";
		return 0;		
	}
	cout<<"NO\n";
	return 0;
}
