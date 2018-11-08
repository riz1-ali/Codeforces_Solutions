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
	int order[n];
	set<int> s;
	deque<int> dq;
	lp(n)
	{
		cin>>order[i];
		dq.pb(order[i]);
		s.insert(order[i]);
	}
	int req[n],ans[n];
	lp(n)
	{
		cin>>req[i];
		ans[i]=0;
	}
	// for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
	// 	cout<<*it<<endl;
	lp(n)
	{
		if(s.size()==0)
			break;
		if(s.find(req[i])==s.end())
		{
			ans[i]=0;
			continue;
		}
		else
		{
			int c=0;
			while(dq.front()!=req[i])
			{
				s.erase(dq.front());
				c++;
				dq.pop_front();
			}
			s.erase(dq.front());
			c++;
			dq.pop_front();
			ans[i]=c;
		}
	}
	lp(n)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}