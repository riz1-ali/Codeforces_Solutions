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
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"-1\n";
		return 0;
	}
	cout<<n<<" "<<n+1<<" "<<n*(n+1)<<endl;
}