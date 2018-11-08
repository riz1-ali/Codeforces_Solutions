#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(i,n) for(int i=0;i<n;i++)
int ori[200005],andi[200005];
int n;
void check(ll x,ll y)
{
	int b=x|y,c=x&y;
	if(b!=ori[0] || c!=andi[0])
		return;
	int ans[n];
	ans[0]=x;
	ans[1]=y;
	bool f=0;
	for(int i=1;i<n-1;i++)
	{
		int fl=0;
		lp(j,4)
		{
			b=j|ans[i],c=j&ans[i];
			if(b==ori[i] && c==andi[i])
			{
				ans[i+1]=j;
				fl=1;
				break;
			}	
		}
		if(fl==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<"YES\n";
		lp(i,n)
			cout<<ans[i]<<" ";
		cout<<endl;
		exit(0);
	}
}
int main()
{
	cin>>n;
	lp(i,n-1)
		cin>>ori[i];
	lp(i,n-1)
		cin>>andi[i];
	lp(i,4)
	{
		lp(j,4)
		{
			check(i,j);
		}
	}
	cout<<"NO\n";
	return 0;
}