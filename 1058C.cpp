#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lpr(i,s,e) for(ll i=s;i>=e;i--)
#define lpi(i,s,e) for(ll i=s;i<=e;i++)
#define lp(n) for(ll i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string str;
	cin>>str;
	set<pair<int,int> > pos[1000];
	set<int> sums;
	set<char> type;
	lp(n)
		type.insert(str[i]);
	if(type.size()==1)
	{
		cout<<"YES\n";
		return 0;
	}
	lp(n)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=str[j]-'0';
			sums.insert(sum);
			pos[sum].insert(mp(i,j));
		}
	}
	set<int> temp_pos;
	for(auto it:sums)
	{
		lp(n)
			temp_pos.insert(i);
		int beg=-1,ending=-1,cntr=0;
		for(auto it1:pos[it])
		{
			if(beg==-1 && ending==-1)
			{
				cntr++;
				beg=it1.f;
				ending=it1.s;
				lpi(i,beg,ending)
					temp_pos.erase(i);
				continue;
			}
			// cout<<it<<" "<<it1.f<<" "<<it1.s<<" "<<beg<<" "<<ending<<endl;
			if(it1.f==ending+1 || it1.f==beg)
			{
				if(it1.f!=beg)
					cntr++;
				beg=it1.f;
				ending=it1.s;
				lpi(i,beg,ending)
					temp_pos.erase(i);
			}
		}
		if(temp_pos.size()==0 && cntr>1)
		{
			cout<<"YES\n";
			return 0;
		}
		temp_pos.clear();
	}
	cout<<"NO\n";
	return 0;
}