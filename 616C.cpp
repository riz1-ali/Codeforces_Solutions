#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int dcol[]={0,+1,0,-1};
int drow[]={-1,0,+1,0};
vector<int> total;
set<int> stacks;
string mat[1010];
int n,m,pre[1010][1010],cntr=0;
void dfs(int ind,int r,int c)
{
	total[ind]++;
	pre[r][c]=ind;
	lp(4)
	{
		int tc=c+dcol[i],tr=r+drow[i];
		if(tr>=0 && tr<=n-1 && tc>=0 && tc<=m-1)
			if(mat[tr][tc]=='.' && pre[tr][tc]==-1)
				dfs(ind,tr,tc);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	lp(n)
		lpi(j,0,m-1)
			pre[i][j]=-1;
	lp(n)
		cin>>mat[i];
	lp(n)
		lpi(j,0,m-1)
		{
			if(pre[i][j]==-1 && mat[i][j]=='.')
			{
				total.pb(0);
				dfs(cntr,i,j);
				cntr++;
			}
		}	
	lp(n)
	{
		lpi(j,0,m-1)
			if(mat[i][j]=='.')
				cout<<".";
			else
			{
				stacks.clear();
				int r=i,c=j,ans=1;
				lp(4)
				{
					int tc=c+dcol[i],tr=r+drow[i];
					if(tr>=0 && tr<=n-1 && tc>=0 && tc<=m-1)
						if(pre[tr][tc]!=-1 && stacks.find(pre[tr][tc])==stacks.end())
						{
							ans+=total[pre[tr][tc]];
							stacks.insert(pre[tr][tc]);
						}
				}
				cout<<ans%10;
			}
		cout<<endl;
	}
	return 0;
}