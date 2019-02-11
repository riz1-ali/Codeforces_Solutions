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
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string t;
		for(int i=1;i<n;i++)
			t+=s[i];
		if(n==2)
		{
			int n1=s[0]-'0',n2=s[1]-'0';
			if(n1>=n2)
				cout<<"NO\n";
			else
			{
				cout<<"YES\n2\n";
				cout<<n1<<" "<<n2<<endl;
			}
			continue;
		}
		cout<<"YES\n2\n";
		cout<<s[0]<<" "<<t<<endl;
	}
	return 0;
}
