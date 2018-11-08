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
	int q,n,left=0,right=0,f=0;
	cin>>q;
	map<int,int> m;
	while(q--)
	{
		char c;
		cin>>c>>n;
		if(!f)
		{
			m[n]=left;
			left--;
			right++;
			f=1;
		}
		else
		{	
			if(c=='L')
			{
				m[n]=left;
				left--;
			}
			if(c=='R')
			{
				m[n]=right;
				right++;
			}
			if(c=='?')
				cout<<min(m[n]-left,right-m[n])-1<<endl;
		}
	}
	return 0;
}