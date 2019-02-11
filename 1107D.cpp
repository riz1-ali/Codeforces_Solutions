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
struct comp{
	bool operator()(int a,int b)
	{
		return a>b;
	}
};
int mat[5210][5210];
set<int,comp> fact;
void factorize(int n)
{
	for(int i=1;i*i<=n;i++)
		if(n%i==0)
		{
			fact.insert(i);
			fact.insert(n/i);
		}
}
void put_p(int k,int ind,int j)
{
	vector<int> temp;
	for(int i=0;i<4;i++)
	{
		temp.pb(k%2);
		k/=2;
	}
	reverse(temp.begin(),temp.end());
	for(int i=1;i<=4;i++)
		mat[ind][4*j+i]=temp[i-1];
}
bool check(int x,int n)
{
	for(int i=1;i<=n;i+=x)
	{
		for(int j=1;j<=n;j+=x)
		{
			int ele=mat[i][j];
			for(int k=i;k<=i+x-1;k++)
				for(int l=j;l<=j+x-1;l++)
					if(mat[k][l]!=ele)
						return 0;				
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n;
	factorize(n);
	char c;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n/4;j++)
		{
			cin>>c;
			if(c>='0' and c<='9')
				k=(int)(c-'0');
			else
			{
				int y;
				y=(int)(c-'A');
				k=y+10;
			}
			put_p(k,i,j);
		}
	}
	for(auto it:fact)
		if(check(it,n))
		{
			cout<<it<<endl;
			return 0;
		}
	return 0;
}
