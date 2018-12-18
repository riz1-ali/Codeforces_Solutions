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
	int t;
	cin>>t;
	while(t--)
	{
		int arr[7],n,one=0,ans[7];
		cin>>n;
		lp(7)
			cin>>arr[i];
		lp(7)
			if(arr[i])
				one++;
		lp(7)
		{
			ll temp[7],mixi=0,X=n;
			lpi(j,0,6)
				temp[(i+j)%7]=arr[j];
			if(!(X%one) && X>one)
				mixi+=(X/one -1)*7,X=one;
			else if(X>one)
				mixi+=(X/one)*7,X%=one;
			if(!X)
				ans[i]=mixi;
			else
			{
				lpi(j,0,6)
				{
					if(temp[j])
						X--;
					if(!X)
					{
						ans[i]=mixi+j+1;
						break;
					}
				}
			}
		}
		int t=2000000000;
		lp(7)
			t=min(t,ans[i]);
		cout<<t<<endl;
	}
	return 0;
}