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
	int n,k;
	cin>>n>>k;
	deque<int> dq;
	vector<int> v;
	for(int i=n;i>=1;i--)
		dq.pb(i);
	lp(n-k-1)
	{
		int x=dq.back();
		dq.pop_back();
		v.pb(x);
	}
	for(int i=v.size()-1;i>=0;i--)
		dq.push_front(v[i]);
	for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
