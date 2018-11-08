#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define lp(i,n) for(i=0;i<n;i++)
set<int> s;
map<int,int> m;
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,k,i,a,c=0;
	cin>>n>>k;
	lp(i,n)
	{
		cin>>a;
		s.insert(a);
		m[a]=i;
	}
	if(s.size()<k)
	{
		cout<<"NO\n";
		return 0;
	}
	cout<<"YES\n";
	for(set<int>::iterator it = s.begin();it!=s.end();it++)
	{
		cout<<m[*it]+1<<" ";
		c++;
		if(c==k)
		{
			cout<<endl;	
			return 0;
		}
	}
	return 0;
}