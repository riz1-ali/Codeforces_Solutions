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
map<int,int> cnt;
set<int> key;
struct comp{
	bool operator()(pair<int,int> a,pair<int,int> b)
	{
		if(a.s != b.s)
			return a.s > b.s;
		return a.f > b.f;
	}
};
multiset<pair<int,int>,comp> heaps;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n*n],mat[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			mat[i][j]=0;
	for(int i=0;i<n*n;i++)
	{
		cin>>arr[i];
		key.insert(arr[i]);
		cnt[arr[i]]=0;
	}
	for(int i=0;i<n*n;i++)
		cnt[arr[i]]++;
	for(auto it:key)
		heaps.insert(mp(it,cnt[it]));
	if(n%2)
	{
		int o=0,e=0,four=0;
		for(auto it:key)
			if(cnt[it]%2)
			{
				o++;
				if(cnt[it]>=4)
				{
					if(cnt[it]%4==0)
						four+=cnt[it];
					else
						four+=4*(cnt[it]/4);
				}
			}
			else
			{
				e++;
				if(cnt[it]>=4)
					if(cnt[it]%4==0)
						four+=cnt[it];
					else
						four+=4*(cnt[it]/4);
			}
		if(o<1 || four<n*n+1-2*n)
		{
			cout<<"NO\n";
			return 0;
		}
		for(auto it:key)
		{
			if(cnt[it]%2)
			{
				heaps.erase(mp(it,cnt[it]));
				mat[n/2][n/2]=it;
				cnt[it]--;
				if(cnt[it]!=0)
					heaps.insert(mp(it,cnt[it]));
				break;
			}
		}
		for(int x=0;x<(n-1)/2;x++)
			for(int y=0;y<(n-1)/2;y++)
			{
				pair<int,int> a =*(heaps.begin());
				heaps.erase(a);
				if(a.s<0)
				{
					cout<<"NO\n";
					return 0;
				}
				mat[x][y]=mat[n-1-x][y]=mat[x][n-1-y]=mat[n-1-x][n-1-y]=a.f;
				a.s-=4;
				if(a.s > 0)
					heaps.insert(a);
			}
		for(int y=0;y<(n-1)/2;y++)
		{
			pair<int,int> a =*(heaps.begin());
			heaps.erase(a);
			mat[n/2][y]=mat[n/2][n-1-y]=a.f;
			if(a.s<0)
			{
				cout<<"NO\n";
				return 0;
			}
			a.s-=2;
			if(a.s > 0)
				heaps.insert(a);
		}
		for(int x=0;x<(n-1)/2;x++)
		{
			pair<int,int> a =*(heaps.begin());
			heaps.erase(a);
			mat[x][n/2]=mat[n-1-x][n/2]=a.f;
			a.s-=2;
			if(a.s<0)
			{
				cout<<"NO\n";
				return 0;
			}
			if(a.s > 0)
				heaps.insert(a);
		}
	}
	else
	{
		for(auto it:key)
			if(cnt[it]%4!=0)
			{
				cout<<"NO\n";
				return 0;
			}
		for(int x=0;x<n/2;x++)
			for(int y=0;y<n/2;y++)
			{
				pair<int,int> a =*(heaps.begin());
				heaps.erase(a);
				mat[x][y]=mat[n-1-x][y]=mat[x][n-1-y]=mat[n-1-x][n-1-y]=a.f;
				if(a.s<0)
				{
					cout<<"NO\n";
					return 0;
				}
				a.s-=4;
				if(a.s > 0)
					heaps.insert(a);
			}
	}
	cout<<"YES\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
