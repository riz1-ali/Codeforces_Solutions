#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lpi(i,start,end,val) for(i=start;i<=end;i+=val)
#define lpr(i,start,end,val) for(i=start;i>=end;i-=val)
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,j;
	cin>>n;
	string s,t;
	cin>>s>>t;
	std::vector<int> v;
	map<int,int> ms,mt;
	lp(i,26)
	{
		ms[i]=mt[i]=0;
	}
	lp(i,n)
	{
		ms[s[i]-'a']++;
		mt[t[i]-'a']++;
	}
	lp(i,26)
	{
		// cout<<i<<" "<<ms[i]<<" "<<mt[i]<<endl;
		if(ms[i]!=mt[i])
		{
			cout<<"-1\n";
			return 0;
		}
	}
	lp(i,n)
	{
		if(s[i]==t[i])
			continue;
		int sw=0;
		lpi(j,i+1,n-1,1)
		{
			// cout<<j<<" "<<i<<" "<<s[j]<<" "<<t[i]<<endl;
			if(s[j]==t[i])
			{
				sw=j;
				break;
			}
		}
		char temp;
		lpr(j,sw-1,i,1)
		{
			// cout<<j<<" "<<i<<" "<<sw<<endl;
			temp=s[j];
			s[j]=s[j+1];
			s[j+1]=temp;
			v.pb(j+1);
		}
	}
	cout<<v.size()<<endl;
	lp(i,v.size())
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}