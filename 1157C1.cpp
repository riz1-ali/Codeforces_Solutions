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
#define all(v) v.begin(),v.end()
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a;
	cin>>n;
	string s="";
	ll arr[n];
	lp(n)
		cin>>arr[i];
	ll l=-1,r=n,prev=-1;
	deque<ll> left,right,combine;
	for(ll i=n-1;i>=0;i--)
	{
		if(prev==-1)
		{
			right.pb(arr[i]);
			prev=i;
			continue;
		}
		else
		{
			if(arr[prev]<arr[i])
			{
				prev=i;
				right.pb(arr[i]);
			}
			else
				break;
		}
	}
	r=prev;
	prev=-1;
	for(ll i=0;i<r;i++)
	{
		if(prev==-1)
		{
			left.pb(arr[i]);
			prev=i;
			continue;
		}
		else
		{
			if(arr[prev]<arr[i])
			{
				prev=i;
				left.pb(arr[i]);
			}
			else
				break;
		}
	}
	while(!left.empty() or !right.empty())
	{
		if(left.empty())
		{
			if(right.empty())
				break;
			else
			{
				if(combine.size()==0)
				{
					combine.pb(right.front());
					right.pop_front();
					s+="R";
					continue;					
				}
				ll ri=right.front(),co=combine[combine.size()-1];
				if(ri>co)
				{
					combine.pb(right.front());
					right.pop_front();
					s+="R";
				}
				else
					break;
				continue;
			}
		}
		if(right.empty())
		{
			if(left.empty())
				break;
			else
			{
				if(combine.size()==0)
				{
					combine.pb(left.front());
					left.pop_front();
					s+="L";
					continue;					
				}
				ll le=left.front(),co=combine[combine.size()-1];
				if(le>co)
				{
					combine.pb(left.front());
					left.pop_front();
					s+="L";
				}
				else
					break;
				continue;
			}
		}
		if(combine.size()==0)
		{
			if(left.front()<right.front())
			{
				combine.pb(left.front());
				left.pop_front();
				s+="L";
				continue;
			}
			else if(right.front()<left.front())
			{
				combine.pb(right.front());
				right.pop_front();
				s+="R";
				continue;
			}
			else
				break;
		}
		ll le=left.front(),ri=right.front(),co=combine[combine.size()-1];
		if(le<ri)
		{
			if(le>co)
			{
				combine.pb(left.front());
				left.pop_front();
				s+="L";
			}
			else if(ri>co)
			{
				combine.pb(right.front());
				right.pop_front();
				s+="R";
			}
			else
				break;
		}
		else if(ri<le)
		{
			if(ri>co)
			{
				combine.pb(right.front());
				right.pop_front();
				s+="R";
			}
			else if(le>co)
			{
				combine.pb(left.front());
				left.pop_front();
				s+="L";
			}
			else
				break;
		}
		else
			break;
	}
	if(left.size()>right.size())
		while(!left.empty())
		{
			if(combine.size()==0)
			{
				left.pop_front();
				s+="L";
				continue;
			}
			if(combine[combine.size()-1]<left.front())
			{
				left.pop_front();
				s+="L";
			}
			else
				break;
		}
	else
		while(!right.empty())
		{
			if(combine.size()==0)
			{
				right.pop_front();
				s+="R";
				continue;
			}
			if(combine[combine.size()-1]<right.front())
			{
				right.pop_front();
				s+="R";
			}
			else
				break;
		}	
	cout<<s.size()<<endl<<s<<endl;
	return 0;
}
