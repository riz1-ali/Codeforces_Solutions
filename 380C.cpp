#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
#define lpr(i,s,e) for(int i=s,i>=e;i--)
string str;
vector<pair<int, pair<int,int> > > seg_tree(4000010);
void build_seg_t(int s,int e,int ind)
{
	if(s>e)
		return;
	if(s==e)
	{
		if(str[s]=='(')
		{
			seg_tree[ind].f=0;
			seg_tree[ind].s.f=1;
			seg_tree[ind].s.s=0;
		}
		else
		{
			seg_tree[ind].f=0;
			seg_tree[ind].s.f=0;
			seg_tree[ind].s.s=1;
		}
		return;
	}
	build_seg_t(s,(s+e)/2,2*ind+1);
	build_seg_t((s+e+2)/2,e,2*ind+2);
	int t=min(seg_tree[2*ind+1].s.f,seg_tree[2*ind+2].s.s);
	seg_tree[ind].f=seg_tree[2*ind+1].f+seg_tree[2*ind+2].f+2*t;
	seg_tree[ind].s.f=seg_tree[2*ind+1].s.f+seg_tree[2*ind+2].s.f-t;
	seg_tree[ind].s.s=seg_tree[2*ind+1].s.s+seg_tree[2*ind+2].s.s-t;
	return;
}
pair<int, pair<int,int> > query(int sl,int sr,int ind,int l,int r)
{
	if(sl>sr || l>sr || r<sl || l>r)
		return mp(0,mp(0,0));
	if(sl>=l && sr<=r)
		return seg_tree[ind];
	pair<int, pair<int,int> > x,y,ans;
	x=query(sl,(sl+sr)/2,2*ind+1,l,r);
	y=query((sl+sr+2)/2,sr,2*ind+2,l,r);
	int t=min(x.s.f,y.s.s);
	ans.f=x.f+y.f+2*t;
	ans.s.f=x.s.f+y.s.f-t;
	ans.s.s=x.s.s+y.s.s-t;
	return ans;
}
int main()
{
	cin>>str;
	build_seg_t(0,str.size()-1,0);
	int t,l,r;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		cout<<query(0,str.size()-1,0,l-1,r-1).f<<endl;
	}
	return 0;
}