#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s,ans;
	cin>>s;
	int k,num=0,candy=0,flake=0;
	cin>>k;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='?')
			candy++;
		else if(s[i]=='*')
			flake++;
		else
			num++;
	}
	if(candy==0 && flake==0 && num<k)
	{
		cout<<"Impossible\n";
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='?')
		{
			if(ans.size()+num>k)
			{
				string temp;
				for(int j=0;j<ans.size()-1;j++)
					temp+=ans[j];
				ans=temp;
			}
		}
		else if(s[i]=='*')
		{
			if(ans.size()+num>k)
			{
				string temp;
				for(int j=0;j<ans.size()-1;j++)
					temp+=ans[j];
				ans=temp;
			}
			else if(ans.size()+num<k)
			{
				string temp=ans;
				while(temp.size()+num<k)
					temp+=ans[ans.size()-1];
				ans=temp;
			}
		}
		else
		{
			ans+=s[i];
			num--;
		}
	}
	if(ans.size()!=k)
	{
		cout<<"Impossible\n";
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}
