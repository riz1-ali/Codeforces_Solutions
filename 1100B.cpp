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
	int n,mt,a;
	cin>>n>>mt;
	set<int> s;
	map<int,int> m;
	for(int i=0;i<mt;i++)
	{
		cin>>a;
		s.insert(a);
		if(m.find(a)==m.end())
			m[a]=1;
		else
			m[a]++;
		if(s.size()==n)
		{
			cout<<"1";
			s.clear();
			for(int j=1;j<=n;j++)
			{
				m[j]--;
				if(m[j]>0)
					s.insert(j);
			}
		}
		else
			cout<<"0";
	}
	cout<<endl;
	return 0;
}
