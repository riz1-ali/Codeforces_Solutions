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
	int n=s.size();
	bool turn=0;
	deque<char> dq;
	for(int i=0;i<n;i++)
	{
		if(!i)
		{
			dq.push_front(s[i]);
			continue;
		}
		if(dq.front()==s[i])
		{
			dq.pop_front();
			turn=!turn;
		}
		else
			dq.push_front(s[i]);
	}
	if(turn)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}
