#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
const ll d=1e9+7;
#define pb push_back
#define mp make_pair
#define sz(a) (ll)a.size()
#define inst(a) insert(a)
#define f first
#define s second
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	int arr[n];
	lp(i,n)
		cin>>arr[i];
	lp(i,n)
		if(arr[i]%2)
			arr[i]++;
	lp(i,n)
		if(!(arr[i]%2))
			arr[i]--;
	lp(i,n)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}