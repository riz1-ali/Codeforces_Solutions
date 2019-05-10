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
ll mat[510][510];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
	lp(n)
		for(ll j=0;j<m;j++)
			cin>>mat[i][j];
	set<ll> uniq[n];
	lp(n)
		for(ll j=0;j<m;j++)
			uniq[i].insert(mat[i][j]);
	ll fxors=0;
	lp(n)
		fxors=fxors^(*uniq[i].begin());
	if(fxors)
	{
		cout<<"TAK\n";
		lp(n)
			for(ll j=0;j<m;j++)
				if(*uniq[i].begin()==mat[i][j])
				{
					cout<<j+1<<" ";
					break;
				}
		cout<<endl;
		return 0;
	}
	ll stx=-1,find_ele=-1;
	lp(n)
		if(uniq[i].size()>=2)
		{
			stx=i;
			ll c=0;
			for(auto it:uniq[i])
			{
				c++;
				find_ele=it;
				if(c==2)
					break;
			}
			break;
		}
	if(stx==-1)
	{
		cout<<"NIE\n";
		return 0;
	}
	cout<<"TAK\n";
	lp(n)
		for(ll j=0;j<m;j++)
		{
			if(i!=stx and *uniq[i].begin()==mat[i][j])
			{
				cout<<j+1<<" ";
				break;
			}
			else if(i==stx and find_ele==mat[i][j])
			{
				cout<<j+1<<" ";
				break;
			}
		}
	cout<<endl;
	return 0;
}
