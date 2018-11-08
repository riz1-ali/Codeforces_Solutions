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
	int n,m;
	cin>>n>>m;
	string s[n],t[n];
	lp(n)
	{
		cin>>s[i];
		t[i]=s[i];
	}
	for(int i=1;i<=n-2;i++)
	{
		for(int j=1;j<=m-2;j++)
		{
			int x=i,y=j;
			if(s[x-1][y-1]=='#' && s[x-1][y]=='#' && s[x-1][y+1]=='#' && s[x][y-1]=='#' && s[x][y+1]=='#' && s[x+1][y-1]=='#' && s[x+1][y]=='#' && s[x+1][y+1]=='#')
				t[x-1][y-1]=t[x-1][y]=t[x-1][y+1]=t[x][y-1]=t[x][y+1]=t[x+1][y-1]=t[x+1][y]=t[x+1][y+1]='.';
			// else
			// {
			// 	cout<<"NO\n";
			// 	return 0;
			// }
			// if(s[i][j]=='.')
			// 	st.insert(mp(i,j));
		}
	}
	lp(n)
	{
		for(int j=0;j<m;j++)
		{
			if(t[i][j]=='#')
			{
				cout<<"NO\n";
				return 0;
			}
		}
	}
	// lp(n)
	// 	cout<<t[i]<<endl;
	cout<<"YES\n";
	return 0;
}