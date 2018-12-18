#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
#define lpi(i,s,e) for(int i=s;i<=e;i++)
#define lpr(i,s,e) for(int i=s,i>=e;i--)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	set<int> s;
	int n,q,a,k=0;
	cin>>n>>q;
	lp(n)
	{
		cin>>a;
		s.insert(a);
	}
	while(q--)
	{
		if(s.size()==0)
		{
			cout<<"0\n";
			continue;
		}
		int m=*(s.begin());
		cout<<m-k<<endl;
		k+=m-k;
		s.erase(m);
	}
	return 0;
}