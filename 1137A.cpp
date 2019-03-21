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
ll mat[1010][1010],faker[1010][1010],fakec[1010][1010];
ll n,m;
ll solve(ll x,ll y)
{
	ll row[n],col[m];
	for(ll i=0;i<n;i++)
		row[i]=mat[i][x];
	for(ll i=0;i<m;i++)
		col[i]=mat[y][i];
	set<ll> rowk,colk;
	map<ll,ll> order_r,order_c;
	for(ll i=0;i<n;i++)
		rowk.insert(row[i]);
	ll c=1;
	for(auto it:rowk)
	{
		order_r[it]=c;
		c++;
	}
	for(ll i=0;i<m;i++)
		colk.insert(col[i]);
	c=1;
	for(auto it:colk)
	{
		order_c[it]=c;
		c++;
	}
	if(order_r[row[x]]!=order_c[col[y]])
	{
		ll val=max(order_r[row[x]],order_c[col[y]]);
		if(val>order_r[row[x]])
		{
			ll flag=0,cx=val;
			for(auto it:rowk)
			{
				if(it==row[x])
					flag=1;
				if(flag)
				{
					order_r[it]=cx;
					cx++;
				}
			}		
		}
		else
		{
			ll flag=0,cx=val;
			for(auto it:colk)
			{
				if(it==col[y])
					flag=1;
				if(flag)
				{
					order_c[it]=cx;
					cx++;
				}
			}			
		}
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
		ans=max(ans,order_r[row[i]]);
	for(ll i=0;i<m;i++)
		ans=max(ans,order_c[col[i]]);
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	lp(n)
		for(ll j=0;j<m;j++)
			cin>>mat[i][j];
	// lp(n)
	// {
	// 	for(ll j=0;j<m;j++)
	// 		cout<<solve(i,j)<<" ";
	// 	cout<<endl;
	// }
	for(ll x=0;x<n;x++)
	{
		ll row[m];
		for(ll i=0;i<m;i++)
			row[i]=mat[x][i];
		set<ll> rowk;
		map<ll,ll> order_r;
		for(ll i=0;i<m;i++)
			rowk.insert(row[i]);
		ll c=1;
		for(auto it:rowk)
		{
			order_r[it]=c;
			c++;
		}
		for(ll i=0;i<m;i++)
			faker[x][i]=order_r[row[i]];
	}
	for(ll x=0;x<m;x++)
	{
		ll row[n];
		for(ll i=0;i<n;i++)
			row[i]=mat[i][x];
		set<ll> rowk;
		map<ll,ll> order_r;
		for(ll i=0;i<n;i++)
			rowk.insert(row[i]);
		ll c=1;
		for(auto it:rowk)
		{
			order_r[it]=c;
			c++;
		}
		for(ll i=0;i<n;i++)
			fakec[i][x]=order_r[row[i]];
	}
	ll row_max[n],col_max[m];
	for(ll x=0;x<n;x++)
	{
		ll temp=0;
		for(ll i=0;i<m;i++)
			temp=max(temp,faker[x][i]);
		row_max[x]=temp;
	}
	for(ll x=0;x<m;x++)
	{
		ll temp=0;
		for(ll i=0;i<n;i++)
			temp=max(temp,fakec[i][x]);
		col_max[x]=temp;
	}
	// cout<<"-------\n";
	// for(ll x=0;x<n;x++)
	// {
	// 	for(ll y=0;y<m;y++)
	// 		cout<<faker[x][y]<<" ";
	// 	cout<<endl;
	// }
	// cout<<"-------\n";
	// for(ll x=0;x<n;x++)
	// {
	// 	for(ll y=0;y<m;y++)
	// 		cout<<fakec[x][y]<<" ";
	// 	cout<<endl;
	// }
	// cout<<"-------\n";
	// for(ll i=0;i<n;i++)
	// 	cout<<row_max[i]<<" ";
	// cout<<endl;
	// cout<<"------\n";
	// for(ll i=0;i<m;i++)
	// 	cout<<col_max[i]<<" ";
	// cout<<endl;
	// cout<<"-------\n";
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			ll vr=0,vc=0;
			if(faker[i][j]!=fakec[i][j])
				if(faker[i][j]>fakec[i][j])
					vc=faker[i][j]-fakec[i][j];
				else
					vr=fakec[i][j]-faker[i][j];
			cout<<max(row_max[i]+vr,col_max[j]+vc)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
