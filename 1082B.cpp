#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(int i=s;i>=e;i--)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int left[n],right[n];
	lp(n)
	{
		left[i]=0;
		right[i]=0;
	}
	bool G=0,S=0;
	lp(n)
	{
		if(s[i]=='G')
		{
			left[i]=1;
			G=1;
			if(i)
				if(s[i-1]=='G')
					left[i]+=left[i-1];
		}
		else
			S=1;
	}
	if(S && !G)
	{
		cout<<"0\n";
		return 0;
	}
	if(G && !S)
	{
		cout<<n<<endl;
		return 0;
	}
	lpr(i,n-1,0)
	{
		if(s[i]=='G')
		{
			right[i]=1;
			if(i<n-1)
				if(s[i+1]=='G')
					right[i]+=right[i+1];
		}
	}
	int rem=0,g=0;
	lp(n)
		if(s[i]=='G')
			g++;
	// lp(n)
	// 	cout<<left[i]<<" ";
	// cout<<endl;
	// lp(n)
	// 	cout<<right[i]<<" ";
	// cout<<endl;
	lp(n)
	{
		if(s[i]=='S')
		{
			int sr=1;
			if(i)
				sr+=left[i-1];
			if(i<n-1)
				sr+=right[i+1];
			// cout<<sr<<endl;
			rem=max(rem,sr);
		}
	}
	cout<<min(rem,g)<<endl;
	return 0;
}