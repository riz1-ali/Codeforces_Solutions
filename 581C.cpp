#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
struct comp
{
    bool operator()(const int &a, const int &b) const{
        if(a%10 != b%10)
			return a%10 > b%10;
		if(a<b)
			return 1;
		return 0;
    }
};
int main()
{
	int a,n,k,turn=0;
	cin>>n>>k;
	multiset<int,comp> s;
	multiset<int,comp>::iterator it;
	lp(n)
	{
		cin>>a;
		s.insert(a);
	}
	int ans=0;
	while(k>0 && !s.empty())
	{
		it=s.begin();
		a=*it;
		s.erase(it);
		if(a==100)
		{
			ans+=10;
			continue;
		}
		int rem=10-(a%10);
		if(rem<=k)
		{
			a+=rem;
			k-=rem;
		}
		else
		{
			a+=k;
			k=0;
		}
		if(a==100)
			ans+=10;
		else
			s.insert(a);
	}
	for(it=s.begin();it!=s.end();it++)
		ans+=(*it)/10;
	cout<<ans<<endl;
}