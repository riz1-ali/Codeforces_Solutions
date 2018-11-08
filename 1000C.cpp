#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
map<ll,ll> m;
ll counta[200010]={0};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,x,y;
	cin>>n;
	lp(i,n)
	{
		cin>>x>>y;
		if(m.find(x)!=m.end())
			m[x]++;
		else
			m[x]=1;
		if(m.find(y+1)!=m.end())
			m[y+1]--;
		else
			m[y+1]=-1;
	}
	ll index,val;	
	index=m.begin()->f;
	val=m[index];
	for(map<ll,ll>::iterator it=m.begin();it!=m.end();)
	{
		++it;
		if(it==m.end())
			break;
		counta[val]+=(it->f)-index;
		val+=it->s;
		index=it->f;
	}
	lpi(i,1,n,1)
		cout<<counta[i]<<" ";
	cout<<endl;
	return 0;
}