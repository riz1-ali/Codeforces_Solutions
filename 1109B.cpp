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
	string s;
	cin>>s;
	set<char> ct;
	map<char,int> val;
	for(int i=0;i<s.size();i++)
	{
		ct.insert(s[i]);
		val[s[i]]=0;
	}
	for(int i=0;i<s.size();i++)
		val[s[i]]++;
	for(auto it:ct)
		if(val[it]>=s.size()-1)
		{
			cout<<"Impossible\n";
			return 0;
		}
	if(s.size()%2)
	{
		cout<<"2\n";
		return 0;
	}
	else
	{
		for(int i=1;i<=s.size();i++)
		{
			string temp=s.substr(i,s.size()-i)+s.substr(0,i);
			if(temp!=s)
			{
				bool f=0;
				for(int i=0;i<s.size()/2;i++)
					if(temp[i]!=temp[s.size()-i-1])
					{
						f=1;
						break;
					}
				if(!f)
				{
					cout<<"1\n";
					return 0;
				}
			}
		}
		cout<<"2\n";
	}
	return 0;
}
