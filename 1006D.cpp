#include<bits/stdc++.h>
using namespace std;
#define lp(i,n) for(i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,ans=0;
	string s,t;
	cin>>n>>s>>t;
	lp(i,n/2)
	{
		map<char,int> a;
		a[s[i]]++;
		a[s[n-1-i]]++;
		a[t[i]]++;
		a[t[n-1-i]]++;
		if(a.size()==4)
			ans+=2;
		else if(a.size()==3)
			ans+=1+int(s[i]==s[n - i - 1]);
		else if(a.size()==2)
			ans+=int(a[s[i]]!=2);
	}
	if(n%2 && s[n/2]!=t[n/2])
		ans++;
	cout<<ans<<endl;
	return 0;
}