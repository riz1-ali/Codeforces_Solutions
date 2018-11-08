#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int low=0,up=0,num=0,clow=0,cup=0,cnum=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]<='9' && s[i]>='0')
			{
				cnum++;
				num=1;
			}
			if(s[i]<='Z' && s[i]>='A')
			{
				cup++;
				up=1;
			}
			if(s[i]<='z' && s[i]>='a')
			{
				clow++;
				low=1;
			}
		}
		if(low+up+num==3)
		{
			cout<<s<<endl;
			continue;
		}
		else if(low+up+num==2)
		{
			// cout<<low<<" "<<up<<" "<<num<<endl;
			if(low==0)
			{
				if(cnum>=cup)
				{
					for(int i=0;i<n;i++)
					{
						if(s[i]<='9' && s[i]>='0')
						{
							s[i]='a';
							break;
						}
					}
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						if(s[i]<='Z' && s[i]>='A')
						{
							s[i]='a';
							break;
						}
					}
				}
			}
			else if(up==0)
			{
				if(cnum>=clow)
				{
					for(int i=0;i<n;i++)
					{
						if(s[i]<='9' && s[i]>='0')
						{
							s[i]='A';
							break;
						}
					}
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						if(s[i]<='z' && s[i]>='a')
						{
							s[i]='A';
							break;
						}
					}
				}
			}
			else
			{
				if(cup>=clow)
				{
					for(int i=0;i<n;i++)
					{
						if(s[i]<='Z' && s[i]>='A')
						{
							s[i]='0';
							break;
						}
					}
				}
				else
				{
					for(int i=0;i<n;i++)
					{
						if(s[i]<='z' && s[i]>='a')
						{
							s[i]='0';
							break;
						}
					}
				}	
			}
		}
		else
		{
			if(low==1)
			{
				s[0]='A';
				s[1]='0';
			}
			else if(up==1)
			{
				s[0]='a';
				s[1]='0';
			}
			else
			{
				s[0]='a';
				s[1]='A';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}