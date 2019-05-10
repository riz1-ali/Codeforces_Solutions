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
	ll a,b,c;
	cin>>a>>b>>c;
	ll arr[]={0,1,2,0,2,1,0};
	ll ans=0;
	lp(7)
	{
		ll temp_ans=0;
		ll ava=a/3,avb=b/2,avc=c/2,dec;
		dec=min(ava,min(avb,avc));
		ll newa=a-dec*3,newb=b-dec*2,newc=c-dec*2;
		temp_ans=dec*7;
		ll step=0,cur=i;
		while(step<7)
		{
			step++;
			if(arr[cur]==0)
				if(newa)
				{
					temp_ans++;
					newa--;
				}
				else
					break;
			if(arr[cur]==1)
				if(newb)
				{
					temp_ans++;
					newb--;
				}
				else
					break;
			if(arr[cur]==2)
				if(newc)
				{
					temp_ans++;
					newc--;
				}
				else
					break;
			cur++;
			if(cur==7)
				cur=0;
		}
		ans=max(temp_ans,ans);
	}
	cout<<ans<<endl;
	return 0;
}
