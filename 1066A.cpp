#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int L,v,l,r;
		cin>>L>>v>>l>>r;
		int ans=L/v;
		int r1=r%v;
		r-=r1;
		int l1=l%v;
		if(l1>0)
			l+=v-l1;
		if(r>=l)
			ans-=((r-l)/v)+1;
		cout<<ans<<endl;
	}
	return 0;
}