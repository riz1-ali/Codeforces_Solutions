#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int n,a;
	cin>>n;
	map<int,int> m;
	set<int> s;
	string st;
	cin>>st;
	lp(n)
	{
		a=(int)(st[i]-'0');
		s.insert(a);
		if(m.find(a)!=m.end())
			m[a]++;
		else
			m[a]=1;
	}
	if(s.find(8)==s.end() || n<11)
	{
		cout<<"0\n";
		return 0;
	}
	if(m[8]*11<=n)
		cout<<m[8]<<endl;
	else
		cout<<n/11<<endl;
	return 0;
}