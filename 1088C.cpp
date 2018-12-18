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
	int n;
	cin>>n;
	int arr[n];
	lp(n)
		cin>>arr[i];
	cout<<n+1<<endl;
	int d=n,k=0;
	lpr(i,n-1,0)
	{
		int x=(arr[i]+k)%d;
		int y=(i-x)%d;
		y<0?y+=d:y+=0;
		k+=y;
		cout<<"1 "<<i+1<<" "<<y<<endl;
	}
	cout<<"2 "<<n<<" "<<n<<endl;
	return 0;
}