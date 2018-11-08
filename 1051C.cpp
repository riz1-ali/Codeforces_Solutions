#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
int main()
{
	vector<ll> v;
	map<ll,ll> m;
	map<ll,char> val;
	set<ll> a,b,rep,uni,uni2;
	string s;
	ll n,i,x;
	bool flag=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.pb(x);
		m[x]=0;
	}
	for(i=0;i<n;i++)
		m[v[i]]++;
	for(i=0;i<n;i++)
	{
		if(m[v[i]]==1)
		{
			uni.insert(v[i]);
			if(flag)
			{
				s+='A';
				a.insert(v[i]);
				val[v[i]]='A';
			}
			else
			{
				s+='B';
				b.insert(v[i]);
				val[v[i]]='B';
			}
			flag=!flag;
		}
		else
		{
			s+='A';
			rep.insert(v[i]);
		}
		if(m[v[i]]==2)
			uni2.insert(v[i]);
	}
	if(a.size()==b.size())
	{
		cout<<"YES\n"<<s<<endl;
		return 0;
	}
	for(set<ll>::iterator it=uni2.begin();it!=uni2.end();it++)
		rep.erase(*it);
	if(rep.size()==0)
	{
		cout<<"NO\n";
		return 0;
	}
	int xv=(*rep.begin());
	for(i=0;i<n;i++)
	{
		if(xv==v[i])
		{
			s[i]='B';
			break;
		}
	}
	cout<<"YES\n"<<s<<endl;
	return 0;
}