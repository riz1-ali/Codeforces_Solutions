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
	ll n,a;
	cin>>n;
	deque<ll> dq;
	lp(n)
	{
		cin>>a;
		dq.pb(a);
	}
	sort(dq.begin(),dq.end(),greater<ll>());
	list<ll> ans;
	bool f=0;
	lp(n)
	{
		if(!i)
		{
			ans.pb(dq.front());
			dq.pop_front();
			continue;
		
		}
		if(f)
		{
			ll ele,diff=1e18;
			for(auto it:dq)
			{
				if(abs(ans.front()-it)<diff)
				{
					diff=abs(ans.front()-it);
					ele=it;	
				}
			}
			deque<ll> temp;
			while(!dq.empty())
			{
				if(dq.front()==ele)
				{
					ans.push_front(ele);
					dq.pop_front();
					break;
				}
				temp.push_front(dq.front());
				dq.pop_front();
			}
			while(!temp.empty())
			{
				dq.push_front(temp.front());
				temp.pop_front();
			}
			f=!f;
		}
		else
		{
			ll ele,diff=1e18;
			for(auto it:dq)
			{
				if(abs(ans.back()-it)<diff)
				{
					diff=abs(ans.back()-it);
					ele=it;	
				}
			}
			deque<ll> temp;
			while(!dq.empty())
			{
				if(dq.front()==ele)
				{
					ans.pb(ele);
					dq.pop_front();
					break;
				}
				temp.push_front(dq.front());
				dq.pop_front();
			}
			while(!temp.empty())
			{
				dq.push_front(temp.front());
				temp.pop_front();
			}
			f=!f;
		}
	}
	for(auto it:ans)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}
