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
	ll n,k;
	cin>>n>>k;
	ll hit[n];
	for(int i=0;i<n;i++)
		cin>>hit[i];
	string seq;
	cin>>seq;
	ll dmg=0;
	for(int i=0;i<n;)
	{
		char cur=seq[i];
		vector<ll> dam;
		dam.pb(hit[i]);
		int j=i+1;
		ll temp_sum=0,sum=hit[i];
		while(cur==seq[j] and j<n)
		{
			dam.pb(hit[j]);
			sum+=hit[j];
			j++;
		}
		// cout<<i<<" "<<j<<" "<<dam.size()<<" "<<sum<<endl;
		i=j;
		if(dam.size()<=k)
			dmg+=sum;
		else
		{
			sum=0;
			sort(dam.begin(),dam.end(),greater<ll>());
			for(int j=0;j<k;j++)
				sum+=dam[j];
			dmg+=sum;
		}
		// else
		// {
		// 	sum=0;
		// 	bool omit[dam.size()];
		// 	for(j=0;j<dam.size();j++)
		// 		omit[j]=0;
		// 	for(j=k;j<dam.size();)
		// 	{
		// 		ll ind=j,val=dam[j];
		// 		for(int l=j-1;l>=j-k;l--)
		// 		{
		// 			if(dam[l]<val)
		// 			{
		// 				val=dam[l];
		// 				ind=l;
		// 			}
		// 		}
		// 		omit[ind]=1;
		// 		j=ind+k;
		// 		if(j==dam.size()-1)
		// 			break;
		// 	}
		// 	for(j=0;j<dam.size();j++)
		// 		if(!omit[j])
		// 			sum+=dam[j];
		// 	temp_sum+=sum;
		// 	dmg+=temp_sum;
		// }
		// cout<<dmg<<" --------\n";
	}
	cout<<dmg<<endl;
	return 0;
}
