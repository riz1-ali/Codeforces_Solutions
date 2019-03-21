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
	string t1,t2;
	cin>>t1>>t2;
	int h1=0,m1=0,h2=0,m2=0,k,ht,mt,ah=0,at=0;
	for(int i=0;i<2;i++)
	{
		k = t1[i]-'0';
		h1 = h1*10 + k;
	}
	for(int i=0;i<2;i++)
	{
		k = t2[i]-'0';
		h2 = h2*10 + k;
	}
	for(int i=3;i<5;i++)
	{
		k = t1[i]-'0';
		m1 = m1*10 + k;
	}
	for(int i=3;i<5;i++)
	{
		k = t2[i]-'0';
		m2 = m2*10 + k;
	}
	int tm=0;
	if(h1>h2)
		tm+=60*24;
	tm = (tm+(h1+h2)*60+(m1+m2))/2; 
	ht = tm/60;
	mt = tm - 60*ht;
	if(mt>60)
	{
		int x=mt/60;
		mt%=60;
		ht+=x;
	}
	ht%=24;
	if(ht<10)
		cout<<"0"<<ht<<":";
	else
		cout<<ht<<":";
	if(mt<10)
		cout<<"0"<<mt;
	else
		cout<<mt;
	cout<<endl;
	return 0;
}
