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
	int n;
	cin>>n;
	set<pair<int,int> > poss;
	map<pair<int,int> ,int> m;
	int arr[n][2],clue[n][2];
	lp(n)
		cin>>arr[i][0]>>arr[i][1];
	lp(n)
		cin>>clue[i][0]>>clue[i][1];
	lp(n)
	{
		int x=arr[0][0]+clue[i][0],y=arr[0][1]+clue[i][1];
		if(poss.find(mp(x,y))==poss.end())
			{
				poss.insert(mp(x,y));
				m[mp(x,y)]=1;
			}
			else
				m[mp(x,y)]++;
	}
	lpi(i,1,n-1)
	{
		lpi(j,0,n-1)
		{
			int x=arr[i][0]+clue[j][0],y=arr[i][1]+clue[j][1];
			if(poss.find(mp(x,y))!=poss.end())
				m[mp(x,y)]++;
		}
	}
	for(auto it:poss)
		if(m[it]==n)
		{
			cout<<it.f<<" "<<it.s<<endl;
			return 0;
		}
	return 0;
}
