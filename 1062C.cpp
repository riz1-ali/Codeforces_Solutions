#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
ll spf[1000010];
set<ll> fact;
map<ll,ll> fact_count;
void sieve()
{
	spf[1] = 1; 
	for (ll i=2; i<1000001; i++)
		spf[i] = i;
	for (ll i=2; i*i<1000001; i++) 
	{
		if(spf[i]==i) 
		{
			for(ll j=i*i;j<1000001;j+=i) 
				if (spf[j]==j) 
					spf[j]=i; 
		}
	} 
}
void factor(ll n)
{
	while(n>1)
	{
		if(fact.find(spf[n])==fact.end())
		{
			fact.insert(spf[n]);
			fact_count[spf[n]]=1;
		}
		else
			fact_count[spf[n]]++;
		n/=spf[n];
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	sieve();
	ll n;
	cin>>n;
	if(spf[n]==n)
	{
		cout<<"1 0\n";
		return 0;
	}
	factor(n);
	for(map<ll,ll>::iterator it=fact_count.begin();it!=fact_count.end();it++)
		cout<<it->f<<" "<<it->s<<endl;
	return 0;
}