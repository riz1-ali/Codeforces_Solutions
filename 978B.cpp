#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lp(i,n) for(i=0;i<n;i++)
map<int,int> m;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	string s;
	cin>>s;
	lp(i,n)
		m[i]=0;
	lp(i,n)
	{
		if(i==0)
		{
			if(s[i]=='x')
				m[i]=1;
			continue;
		}
		else
		{
			if(s[i]=='x')
				m[i]=m[i-1]+1;
		}
	}
	int ans=0,j;
	lp(i,n)
	{
		if(m[i]==3)
		{
			j=i;
			while(j<n && m[j]!=0)
			{
				m[j]-=m[i];
				ans++;	
				j++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}