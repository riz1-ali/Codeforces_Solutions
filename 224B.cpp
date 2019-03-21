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
	ll arr[n];
	set<ll> uni;
	map<ll,ll> cnt;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		cnt[arr[i]]=0;
		uni.insert(arr[i]);
	}
	for(ll i=0;i<n;i++)
		cnt[arr[i]]++;
	if(k>n || uni.size()<k)
	{
		cout<<"-1 -1\n";
		return 0;
	}
	ll left=0,right=n-1,uniq=uni.size();
	bool f=0;
	while(uniq > k)
	{
		f=!f;
		if(cnt[arr[left]]==0)
		{
			cnt[arr[left]]--;
				uniq--;
			left++;
		}
		else
		{
			cnt[arr[right]]--;
			if(cnt[arr[right]]==0)
				uniq--;
			right--;
		}
	}
	while(left < right)
		if(cnt[arr[left]]>1)
		{
			cnt[arr[left]]--;
			left++;
		}
		else
			break;
	while(right > left)
		if(cnt[arr[right]]>1)
		{
			cnt[arr[right]]--;
			right--;
		}
		else
			break;
	cout<<left+1<<" "<<right+1<<endl;
	return 0;
}