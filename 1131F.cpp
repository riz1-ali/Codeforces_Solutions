#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pint;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
vector<int> ans[150001];
int parent[150001];
int sizes[150001];
int find_parent(int n)
{
	while(parent[n]!=n)
		n=parent[n];
	return n;
}
void unions(int a,int b)
{
	int par_a = find_parent(a),par_b=find_parent(b);
	if(par_b==par_a)
		return;
	if(sizes[par_a]>sizes[par_b])
	{
		sizes[par_a]+=sizes[par_b];
		sizes[par_b]=0;
		parent[par_b]=parent[par_a];
		for(auto it:ans[par_b])
			ans[par_a].pb(it);
		ans[par_b].resize(0);
	}
	else
	{
		sizes[par_b]+=sizes[par_a];
		sizes[par_a]=0;
		parent[par_a]=parent[par_b];
		for(auto it:ans[par_a])
			ans[par_b].pb(it);
		ans[par_a].resize(0);		
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,a,b;
	cin>>n;
	vector<pint> v;
	for(int i=1;i<=n;i++)
	{
		parent[i]=i;
		sizes[i]=1;
		ans[i].pb(i);
	}
	lp(n-1)
	{
		cin>>a>>b;
		unions(a,b);
	}
	for(int i=1;i<=n;i++)
	{
		if(sizes[i]==n)
		{
			for(auto it:ans[i])
				cout<<it<<" ";
			cout<<endl;
			return 0;
		}
	}
	return 0;
}