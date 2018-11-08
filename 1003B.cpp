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
	int a,b,x,i,ans=0;
	cin>>a>>b>>x;
	if(x==1)
	{
		lp(i,a)
			cout<<"0";
		lp(i,b)
			cout<<"1";
		cout<<endl;
		return 0;
	}
	bool flag=0;
	if(a>=b)
	{
	lp(i,x)
	{
		if(!flag && a)
		{
			cout<<"0";
			a--;
			flag=1;
		}
		else if(flag && b)
		{
			cout<<"1";
			b--;
			flag=0;
		}
		if(i>0)
			ans++;
		if(ans>=x-2)
			break;
	}
	if(!flag)
	{
		lp(i,a)
			cout<<"0";
		lp(i,b)
			cout<<"1";
	}
	else
	{
		lp(i,b)
			cout<<"1";
		lp(i,a)
			cout<<"0";
	}
	cout<<endl;
	}
	else
	{
		int temp=a;
		a=b;
		b=temp;
		lp(i,x)
		{
			if(!flag && a)
			{
				cout<<"1";
				a--;
				flag=1;
			}
			else if(flag && b)
			{
				cout<<"0";
				b--;
				flag=0;
			}
			if(i>0)
				ans++;
			if(ans>=x-2)
				break;
		}
		if(!flag)
		{
			lp(i,a)
				cout<<"1";
			lp(i,b)
				cout<<"0";
		}
		else
		{
			lp(i,b)
				cout<<"0";
			lp(i,a)
				cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}