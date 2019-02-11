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
	int n,g[3],m[3],ch[3];
	cin>>n;
	g[0]=n/3;
	g[1]=g[0],g[2]=g[0];
	m[0]=m[1]=m[2]=0;
	string s;
	cin>>s;
	lp(n)
		m[s[i]-'0']++;
	lp(3)
		ch[i]=m[i]-g[i];
	vector<int> pos[3];
	set<int> de[3];
	lp(n)
	{
		if(ch[s[i]-'0']!=0)
		{
			pos[s[i]-'0'].pb(i);
			if(ch[s[i]-'0']>0)
				de[s[i]-'0'].insert(i);
		}
	}
	// lp(3)
	// 	cout<<ch[i]<<" ";
	// cout<<endl;
	while(!de[2].empty() && ch[2]>0)
	{
		int val=*(de[2].begin());
		de[2].erase(de[2].begin());
		// cout<<val<<endl;
		if(ch[0]<0)
		{
			s[val]='0';
			ch[2]--;
			ch[0]++;
		}
		else if(ch[1]<0)
		{
			s[val]='1';
			ch[2]--;
			ch[1]++;
		}
		else
		{
			de[2].insert(val);
			break;
		}
	}
	while(!de[1].empty() && ch[1]>0)
	{
		int val=*(de[1].begin());
		de[1].erase(de[1].begin());
		if(ch[0]<0)
		{
			s[val]='0';
			ch[1]--;
			ch[0]++;
		}
		else
		{
			de[1].insert(val);
			break;
		}
	}
	while(!de[0].empty() && ch[0]>0)
	{
		int val=*(--de[0].end());
		de[0].erase(--de[0].end());
		if(ch[2]<0)
		{
			s[val]='2';
			ch[0]--;
			ch[2]++;
		}
		else if(ch[1]<0)
		{
			s[val]='1';
			ch[0]--;
			ch[1]++;
		}
		else
		{
			de[0].insert(val);
			break;
		}
	}
	while(!de[1].empty() && ch[1]>0)
	{
		int val=*(--de[1].end());
		de[1].erase(--de[1].end());
		if(ch[2]<0)
		{
			s[val]='2';
			ch[2]++;
			ch[1]--;
		}
		else
		{
			de[1].insert(val);
			break;
		}
	}
	cout<<s<<endl;
	return 0;
}
