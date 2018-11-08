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
	int n,r;
	cin>>n>>r;
	vector<int> a(n);
	lp(n)
		cin>>a[i];
	int ans=0;
	int end=-1;
	while (end<n-1)
	{
		int pos=-1;
		for (int i=n-1;i>max(-1,end-r+1);i--)
		{
			if(a[i]==1 && i-r<=end)
			{
				pos=i;
				break;
			}
		}
		if(pos==-1)
		{
			cout<<"-1\n";
			return 0;
		}
		ans++;
		end=pos+r-1;
	}
	cout<<ans<<endl;
	return 0;
}