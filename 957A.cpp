#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define sz(a) (int)a.size()
const ll d=1e9+7;
set <string> s;
int main()
{
	int n,i;
	string s;
	cin>>n;
	cin>>s;
	int q[n];
	int c=0;
	if(s[c]=='?')
		q[c]=0;
	c++;
	for(i=1;i<n;i++)
	{
		if(s[i]==s[i-1] && s[i]!='?')
		{
			cout<<"No\n";
			return 0;
		}
		if(s[i]=='?')
			q[c++]=i;
	}
	int l,r,f=0,nop=0;
	for(i=0;i<n;i++)
	{
		if(s[i]!='?')
			continue;
		else
		{
			l=i;
			r=i;
			while(s[r]=='?')
				r++;
			if(r-l>1)
			{
				nop=2;	
				continue;
			}
			else
			{
				if(l==0 || r==n)
				{
					nop=2;
					continue;
				}
				else
				{
					if(s[l-1]==s[r])
					{
						nop=max(nop,2);
					}
					else
					{
						nop=max(nop,1);
						f=0;
					}
				}
			}
		}
	}
	if(nop==2)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}