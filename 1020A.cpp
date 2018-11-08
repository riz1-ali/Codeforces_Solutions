#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define push_back pb
int main()
{
	ll n,h,a,k,b,ta,fa,tb,fb,ans;
	cin>>n>>h>>a>>b>>k;
	while(k--)
	{
		ans=0;
		cin>>ta>>fa>>tb>>fb;
		if(ta==tb)
			ans=abs(fb-fa);
		else if((fa>=a && fb<=b) || (fb>=a && fa<=b))
			ans=abs(fa-fb)+abs(ta-tb);
		else if(fa>=b && fb>=b)
			ans=abs(fa-b)+abs(tb-ta)+abs(fb-b);
		else if(fa<=a && fb<=a)
			ans=abs(fa-a)+abs(tb-ta)+abs(fb-a);
		cout<<ans<<endl;
	}
	return 0;
}