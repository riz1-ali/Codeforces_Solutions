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
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll charc[26],n=s.size();
		lp(26)
			charc[i]=0;
		for(ll i=0;i<s.size();i++)
			charc[s[i]-'a']++;
		string ans="";
		char lock='-';
		ll ind_l=-1;
		lp(26)
			if(charc[i]>0)
			{
				lock=(char)('a'+i);
				ind_l=i;
				ll tq=charc[i];
				while(tq--)
					ans+=lock;
				charc[i]=0;
				break;
			}
		bool flag=1,reverse_1=1;
		while(ans.size()<n)
		{
			ll new_i=-1,tt;
			char new_c='-';
			lp(26)
			{
				if(charc[i]>0 and abs(i-ind_l)!=1 and i!=ind_l)
				{
					new_i=i;
					tt=charc[i];
					new_c=(char)('a'+i);
					charc[i]=0;
					break;
				}
			}
			if(new_i==-1)
			{
				if(!reverse_1)
				{
					flag=0;
					break;
				}
				reverse_1=0;
				reverse(all(ans));
				ind_l=ans[ans.size()-1]-'a';
				continue;
			}
			while(tt--)
				ans+=new_c;
			ind_l=new_i;

		}
		if(!flag)
		{
			cout<<"No answer\n";
			continue;
		}
		cout<<ans<<endl;
	}
	return 0;
}
