#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	lp(n)
	{
		for(int j=1;j<=n-i;j++)
		{
        	string a=s.substr(i,j);
    		int l=a.size();
    		int k=l/2;
			int cntr[26];
			for(int x=0;x<26;x++)
				cntr[x]=0;    	
    		for(int x=0;x<l;x++)
    			cntr[a[x]-'a']++;
    		int f=0;
    		for(int x=0;x<26;x++)
    		{
    			if(cntr[x]>k)
    			{
    				f=1;
    				break;
    			}
    		}
    		if(!f)
    		{
    			cout<<"YES\n";
    			cout<<a<<endl;
    			return 0;
    		}
    	}
	}
	cout<<"NO\n";
	return 0;
}