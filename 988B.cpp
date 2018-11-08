#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define lp(i,n) for(i=0;i<n;i++)
string s[110];
int main()
{
	ios_base::sync_with_stdio(0);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int n,i,j,k;
	cin>>n;
	lp(i,n)
		cin>>s[i];
	string tmin,temp;
	int ind;
	lp(i,n)
	{
		tmin=s[i];
		ind=i;
		for(j=i+1;j<n;j++)
		{
			if(min(tmin.size(),s[j].size())!=tmin.size())
			{
				tmin=s[j];
				ind=j;
			}
		}
		if(i!=ind)
		{
			temp=s[i];
			s[i]=s[ind];
			s[ind]=temp;
		}
	}
	bool flag;
	lp(i,n-1)
	{
		flag=false;
		for(j=0;j<s[i+1].size();j++)
		{
			if(s[i]==s[i+1].substr(j,s[i].size()))
			{
				flag=true;
				break;
			}
		}
		if(!flag)
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	lp(i,n)
		cout<<s[i]<<endl;
	return 0;
}