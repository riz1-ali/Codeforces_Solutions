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
int mat[4][4];
int eradicate_c(int r,int c)
{
	mat[r][c]=1;
	mat[r+1][c]=1;
	int counts=0,fil=0;
	for(int i=0;i<4;i++)
	{
		if(mat[i][c]==1)
			fil++;
		else
			fil=0;
	}
	if(fil==4)
		counts++;
	fil=0;
	for(int j=0;j<4;j++)
	{
		if(mat[r][j]==1)
			fil++;
		else
			fil=0;
	}
	if(fil==4)
		counts++;
	fil=0;
	for(int j=0;j<4;j++)
	{
		if(mat[r+1][j]==1)
			fil++;
		else
			fil=0;
	}
	if(fil==4)
		counts++;
	mat[r][c]=0;
	mat[r+1][c]=0;
	return counts;
}
int eradicate_r(int r,int c)
{
	mat[r][c]=1;
	mat[r][c+1]=1;
	int counts=0,fil=0;
	for(int j=0;j<4;j++)
	{
		if(mat[r][j]==1)
			fil++;
		else
			fil=0;
	}
	if(fil==4)
		counts++;
	fil=0;
	for(int i=0;i<4;i++)
	{
		if(mat[i][c]==1)
			fil++;
		else
			fil=0;
	}
	if(fil==4)
		counts++;
	fil=0;
	for(int i=0;i<4;i++)
	{
		if(mat[i][c+1]==1)
			fil++;
		else
			fil=0;
	}
	if(fil==4)
		counts++;
	mat[r][c]=0;
	mat[r][c+1]=0;
	return counts;
}
void refine()
{
	vector<int> rowr,colr;
	for(int i=0;i<4;i++)
	{
		int fil=0;
		for(int j=0;j<4;j++)
		{
			if(mat[i][j]==1)
				fil++;
			else
				fil=0;
		}
		if(fil==4)
			rowr.pb(i);
	}
	for(int j=0;j<4;j++)
	{
		int fil=0;
		for(int i=0;i<4;i++)
		{
			if(mat[i][j]==1)
				fil++;
			else
				fil=0;
		}
		if(fil==4)
			colr.pb(j);
	}
	for(int i=0;i<rowr.size();i++)
		for(int j=0;j<4;j++)
			mat[rowr[i]][j]=0;
	for(int j=0;j<colr.size();j++)
		for(int i=0;i<4;i++)
			mat[i][colr[j]]=0;
}
void vert()
{
	int flag=0;
	vector<int> colr;
		vector<pair<int,int> > check;
	for(int j=0;j<4;j++)
	{
		int space=0,fil=0;
		for(int i=0;i<4;i++)
		{
			if(mat[i][j]==0)
				space++;
			else
				space=0;
			if(space==2)
			{
				colr.pb(j);
				break;
			}
		}
	}
	for(int j=0;j<colr.size();j++)
	{
		for(int i=0;i<3;i++)
		{
			if(mat[i][colr[j]]==0 && mat[i+1][colr[j]]==0)
			{
				// mat[i][colr[j]]=1;
				// mat[i+1][colr[j]]=1;
				check.pb(mp(i,colr[j]));				
				// cout<<i+1<<" "<<colr[j]+1<<endl;
				// flag=1;
				break;
			}
		}
		// if(flag)
		// 	break;
	}
	vector<pair<int,int> > pri;
	for(int i=0;i<check.size();i++)
		pri.pb(mp(eradicate_c(check[i].f,check[i].s),i));
	sort(pri.begin(),pri.end(),greater<pair<int,int> >());
	int ind=pri[0].s;
	cout<<check[ind].f+1<<" "<<check[ind].s+1<<endl;
	mat[check[ind].f][check[ind].s]=1;
	mat[check[ind].f+1][check[ind].s]=1;
}
void hori()
{
	int flag=0;
	vector<int> rowr;
	vector<pair<int,int> > check;
	for(int i=0;i<4;i++)
	{
		int space=0,fil=0;
		for(int j=0;j<4;j++)
		{
			if(mat[i][j]==0)
				space++;
			else
				space=0;
			if(space==2)
			{
				rowr.pb(i);
				break;
			}
		}
	}
	for(int i=0;i<rowr.size();i++)
	{
		for(int j=0;j<3;j++)
		{
			if(mat[rowr[i]][j]==0 && mat[rowr[i]][j+1]==0)
			{
				// cout<<rowr[i]+1<<" "<<j+1<<endl;
				check.pb(mp(rowr[i],j));
				// mat[rowr[i]][j]=1;
				// mat[rowr[i]][j+1]=1;
				break;
			}
		}
	}
	vector<pair<int,int> > pri;
	for(int i=0;i<check.size();i++)
		pri.pb(mp(eradicate_r(check[i].f,check[i].s),i));
	sort(pri.begin(),pri.end(),greater<pair<int,int> >());
	int ind=pri[0].s;
	cout<<check[ind].f+1<<" "<<check[ind].s+1<<endl;
	mat[check[ind].f][check[ind].s]=1;
	mat[check[ind].f][check[ind].s+1]=1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int n=s.size();
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			mat[i][j]=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
			vert();
		else
			hori();
		refine();
		// for(int j=0;j<4;j++)
		// {
		// 	for(int k=0;k<4;k++)
		// 		cout<<mat[j][k]<<" ";
		// 	cout<<endl;
		// }
	}
	return 0;
}
