#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lp(i,n) for(i=0;i<n;i++)
vector<string>a,b;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,j;
	cin>>n;
	string s;
	lp(i,n)
	{
		cin>>s;
		a.pb(s);
	}
	lp(i,n)
	{
		cin>>s;
		b.pb(s);
	}
	bool falsify[n];
	lp(i,n)
		falsify[i]=0;
	lp(i,n)
	{
		lp(j,n)
		{
			if(b[i]==a[j] && falsify[j]==0)
			{
				falsify[j]=1;
				break;
			}
		}
	}
	int ans=0;
	lp(i,n)
		if(!falsify[i])
			ans++;
	cout<<ans<<endl;
	return 0;
}