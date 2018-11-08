#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	map<char,int> m;
	for(int i='A';i<='Z';i++)
		m[i]=0;
	string s;
	lp(2)
	{
		cin>>s;
		for(int j=0;j<s.size();j++)
			m[s[j]]++;
	}
	cin>>s;
	for(int j=0;j<s.size();j++)
		m[s[j]]--;
	for(int i='A';i<='Z';i++)
		if(m[i]!=0)
		{
			cout<<"NO\n";
			return 0;
		}
	cout<<"YES\n";
	return 0;
}