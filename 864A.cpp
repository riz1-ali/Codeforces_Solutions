#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
map<int,int> m;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	set<int> s;
	set<int> c;
	int n,a;
	cin>>n;
	lp(n)
	{
		cin>>a;
		s.insert(a);
		m[a]++;
	}
	for(set<int>::iterator x=s.begin();x!=s.end();x++)
		c.insert(m[*x]);
	if(s.size()!=2 || c.size()!=1)
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	for(set<int>::iterator x=s.begin();x!=s.end();x++)
		cout<<*x<<" ";
	cout<<endl;
	return 0;
}