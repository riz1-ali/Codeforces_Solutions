#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int seg_tree[800010];
int arr[200010];
int build(int s,int e,int node)
{
	if(s>e)
		return 0;
	if(s==e)
	{
		seg_tree[node]=arr[s];
		return 1;
	}
	int r1=build(s,(s+e)/2,2*node+1),r2=build((s+e+2)/2,e,2*node+2);
	if(r1 || r2)
	{
		seg_tree[node]=seg_tree[2*node+1]|seg_tree[2*node+2];
		return 0;
	}
	else
	{
		seg_tree[node]=seg_tree[2*node+1]^seg_tree[2*node+2];
		return 1;
	}
}
int update(int s,int e,int node,int ind,int val)
{
	if(s>e || ind<s || ind>e)
		return 0;
	if(ind==s && s==e)
	{
		seg_tree[node]=val;
		return 1;
	}
	int r;
	if(ind<=(s+e)/2)
		r=update(s,(s+e)/2,2*node+1,ind,val);
	else
		r=update((s+e+2)/2,e,2*node+2,ind,val);
	if(r)
	{
		seg_tree[node]=seg_tree[2*node+1]|seg_tree[2*node+2];
		return 0;
	}
	else
	{
		seg_tree[node]=seg_tree[2*node+1]^seg_tree[2*node+2];
		return 1;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,m,p,q;
	cin>>n>>m;
	n=pow(2,n);
	lp(n)
		cin>>arr[i];
	build(0,n-1,0);
	lp(m)
	{
		cin>>p>>q;
		update(0,n-1,0,p-1,q);
		cout<<seg_tree[0]<<endl;
	}
	return 0;
}