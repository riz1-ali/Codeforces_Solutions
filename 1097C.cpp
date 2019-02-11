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
bool check(string a,string b)
{
	int sval=0;
	int fl=1;
	string s=a+b;
	for(int j=0;j<s.size();j++)
	{
		if(s[j]=='(')
			sval++;
		else
			sval--;
		if(sval<0)
		{
			fl=0;
			break;
		}
	}
	if(fl)
		return true;
	return false;
}
bool check_neg(string s,char c)
{
	deque<char> dq;
	for(int j=0;j<s.size();j++)
	{
		if(s[j]==c)
			dq.pb(c);
		else if(!dq.empty())
		{
			if(!dq.empty())
				dq.pop_back();
			else
				return false;
		}
	}
	if(dq.size()!=0)
		return false;
	return true;
}
bool check_pos(string s)
{
	deque<char> dq;
	for(int j=0;j<s.size();j++)
	{
		if(s[j]=='(')
			dq.pb('(');
		else
		{
			if(!dq.empty())
				dq.pop_back();
			else
				return false;
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,sval;
	cin>>n;
	string s;
	set<int> neg_it;
	map<int,int> cntr;
	multiset<pair<int,string> > pos,neg,zero;
	lp(n)
	{
		cin>>s;
		sval=0;
		for(int j=0;j<s.size();j++)
			if(s[j]=='(')
				sval++;
			else
				sval--;
		if(sval==0)
		{
			sval=0;
			int fl=1;
			for(int j=0;j<s.size();j++)
			{
				if(s[j]=='(')
					sval++;
				else
					sval--;
				if(sval<0)
				{
					fl=0;
					break;
				}
			}
			if(fl)
				zero.insert(mp(sval,s));
		}
		else if(sval>0)
		{
			if(check_pos(s))
				pos.insert(mp(sval,s));
		}
		else
		{
			if(check_neg(s,'('))
			{
				neg_it.insert(-1*sval);
				if(cntr.find(-1*sval)==cntr.end())
					cntr[-1*sval]=1;
				else
					cntr[-1*sval]++;
				neg.insert(mp(sval,s));
			}
		}
	}
	int ans=0;
	ans+=zero.size()/2;
	while(!pos.empty() && !neg.empty())
	{
		auto it=pos.begin();
		auto cit=*(pos.begin());
		pos.erase(it);
		if(neg_it.find(cit.f)==neg_it.end() || cntr[cit.f]==0)
			continue;
		auto it1=neg.lower_bound({-1*cit.f,""});
		if(it1==neg.end())
			break;
		if(it1->f!=-1*cit.f)
			continue;
		if(check(cit.s,it1->s) || check(it1->s,cit.s))
		{
			ans++;
			neg.erase(it1);
		}
		cntr[cit.f]--;
		if(cntr[cit.f]==0)
			neg_it.erase(cit.f);
	}
	cout<<ans<<endl;
	return 0;
}
