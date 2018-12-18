#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
vector<ll> adj[510];
bool trav[510];
pair<int,int> bottom,tp;
void dfs1(ll n,ll d)
{
	if(trav[n])
		return;
	trav[n]=1;
	if(bottom.s<d)
		bottom.f=n,bottom.s=d;
	for(auto it:adj[n])
		if(!trav[it])
			dfs1(it,d+1);
	trav[n]=0;
}
/*
	Diameter can be calculated using one dfs.
	Instead of dfs2(bottom.f,0), write dfs1(bottom.f,0)
	and print bottom.s instead of tp.s
*/
void dfs2(ll n,ll d)
{
	if(trav[n])
		return;
	trav[n]=1;
	if(tp.s<d)
		tp.f=n,tp.s=d;
	for(auto it:adj[n])
		if(!trav[it])
			dfs2(it,d+1);
	trav[n]=0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n],sum=0;
	lp(n)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum<2*n-2)
	{
		cout<<"NO\n";
		return 0;
	}
	priority_queue <pair<int,int>,vector<pair<int,int> >,less<pair<int,int> > > temp_edge;
	lp(n)
		temp_edge.push(mp(arr[i],i+1));
	while(sum>2*n-2)
	{
		pair<int,int> u=temp_edge.top();
		temp_edge.pop();
		if(u.f==1)
			break;
		u.f--;
		sum--;
		temp_edge.push(u);
	}
	while(!temp_edge.empty())
	{
		pair<int,int> u=temp_edge.top();
		temp_edge.pop();
		arr[u.s-1]=u.f;
	}
	priority_queue <pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > edge;
	lp(n)
		edge.push(mp(arr[i],i+1));
	while(edge.size()>1)
	{
		deque<pair<int,int> > dq;
		while(!edge.empty())
		{
			dq.pb(edge.top());
			edge.pop();
		}
		if(dq.size()==1)
			break;
		pair<int,int> u=dq.front();
		pair<int,int> ud=dq.back();
		dq.pop_front();
		dq.pop_back();
		while(!dq.empty())
			edge.push(dq.front()),dq.pop_front();
		u.f--;
		ud.f--;
		adj[u.s].pb(ud.s);
		adj[ud.s].pb(u.s);
		if(u.f)
			edge.push(u);
		if(ud.f)
			edge.push(ud);
	}
	set<pair<int,int> > ans;
	lpi(i,1,n)
		for(auto it:adj[i])
			ans.insert(mp(min(it,i),max(it,i)));
	bottom.f=0,bottom.s=-1;
	dfs1(1,0);
	dfs2(bottom.f,0);
	cout<<"YES "<<tp.s<<endl<<ans.size()<<endl;
	for(auto it:ans)
		cout<<it.f<<" "<<it.s<<endl;
	return 0;
}