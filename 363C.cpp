#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
	string s,red;
	cin>>s;
	bool ac[s.size()];
	int c=0;
	char last;
	for(int i=0;i<s.size();i++)
	{
		if(!i)
		{
			ac[i]=1;
			last=s[i];
			c++;
			continue;
		}
		if(s[i]!=last)
		{
			last=s[i];
			c=1;
			ac[i]=1;
		}
		else
		{
			c++;
			if(c==2)
				ac[i]=1;
			else
				ac[i]=0;
		}
	}
	for(int i=0;i<s.size();i++)
		if(ac[i])
			red+=s[i];
	int temp[red.size()];
	for(int i=0;i<red.size();i++)
		temp[i]=0;	
	for(int i=0;i<red.size();i++)
	{
		temp[i]=1;
		if(i && red[i]==red[i-1])
			temp[i]=temp[i-1]+1;
		if(temp[i]==2 && i>=2 && temp[i-2]==2)
		{
			temp[i]=1;
			continue;
		}
		cout<<red[i];
	}
	cout<<endl;
	return 0;
}