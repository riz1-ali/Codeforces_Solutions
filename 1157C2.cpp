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
	deque<ll> ans;
	ll l=0,r=n-1;
	while(l<=r)
	{
		if(arr[l]<arr[r])
		{
			if(ans.size()==0)
			{
				ans.pb(arr[l]);
				l++;
				s+="L";
				continue;
			}
			if(ans[ans.size()-1]<arr[l])
			{
				ans.pb(arr[l]);
				l++;
				s+="L";
				continue;
			}
			else if(ans[ans.size()-1]<arr[r])
			{
				ans.pb(arr[r]);
				r--;
				s+="R";
				continue;
			}
			else
			{
				ll lseq=0,rseq=0;
				ll ele=ans[ans.size()-1];
				for(ll i=l;i<=r;i++)
				{
					if(arr[i]>ele)
					{
						ele=arr[i];
						lseq++;
					}
					else
						break;
				}
				ele=ans[ans.size()-1];
				for(ll i=r;i>=l;i--)
				{
					if(arr[i]>ele)
					{
						ele=arr[i];
						rseq++;
					}
					else
						break;
				}
				if(lseq>=rseq)
				{
					lp(lseq)
						s+="L";
					break;
				}
				else
				{
					lp(rseq)
						s+="R";
					break;
				}
			}
		}
		else if(arr[l]>arr[r])
		{
			if(ans.size()==0)
			{
				ans.pb(arr[r]);
				r--;
				s+="R";
				continue;
			}
			if(ans[ans.size()-1]<arr[r])
			{
				ans.pb(arr[r]);
				r--;
				s+="R";
				continue;
			}
			else if(ans[ans.size()-1]<arr[l])
			{
				ans.pb(arr[l]);
				l++;
				s+="L";
				continue;
			}
			else
			{
				ll lseq=0,rseq=0;
				ll ele=ans[ans.size()-1];
				for(ll i=l;i<=r;i++)
				{
					if(arr[i]>ele)
					{
						ele=arr[i];
						lseq++;
					}
					else
						break;
				}
				ele=ans[ans.size()-1];
				for(ll i=r;i>=l;i--)
				{
					if(arr[i]>ele)
					{
						ele=arr[i];
						rseq++;
					}
					else
						break;
				}
				if(lseq>=rseq)
				{
					lp(lseq)
						s+="L";
					break;
				}
				else
				{
					lp(rseq)
						s+="R";
					break;
				}
			}
		}
		else
		{
			if(ans.size()==0)
			{
				ll lseq=1,rseq=1;
				ll ele=arr[l];
				for(ll i=l+1;i<=r;i++)
				{
					if(arr[i]>ele)
					{
						ele=arr[i];
						lseq++;
					}
					else
						break;
				}
				ele=arr[r];
				for(ll i=r-1;i>=l;i--)
				{
					if(arr[i]>ele)
					{
						ele=arr[i];
						rseq++;
					}
					else
						break;
				}
				if(lseq>=rseq)
				{
					lp(lseq)
						s+="L";
					break;
				}
				else
				{
					lp(rseq)
						s+="R";
					break;
				}
			}
			ll lseq=0,rseq=0;
			ll ele=ans[ans.size()-1];
			for(ll i=l;i<=r;i++)
			{
				if(arr[i]>ele)
				{
					ele=arr[i];
					lseq++;
				}
				else
					break;
			}
			ele=ans[ans.size()-1];
			for(ll i=r;i>=l;i--)
			{
				if(arr[i]>ele)
				{
					ele=arr[i];
					rseq++;
				}
				else
					break;
			}
			if(lseq>=rseq)
			{
				lp(lseq)
					s+="L";
				break;
			}
			else
			{
				lp(rseq)
					s+="R";
				break;
			}
		}
	}
	cout<<s.size()<<endl<<s<<endl;
	return 0;
}
