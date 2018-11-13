#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
bool comp(const pair<int,int> left, const pair<int,int> right)
{
    return left.f > right.f || (left.f == right.f && left.s < right.s);
}
int main()
{
    int n,k,a,b;
    vector<pair<int,int> > t;
    cin>>n>>k;
    lp(n)
    {
    	cin>>a>>b;
    	t.pb(mp(a,b));
    }
    sort(t.begin(),t.end(),comp);
    k-=1;
    int l(k),r(k);
    while (l > 0 && t[l-1].f == t[k].f && t[l-1].s == t[k].s)
        l-=1;
    while (r + 1 < n && t[r+1].f == t[k].f && t[r+1].s == t[k].s)
        r+=1;
    cout<<r-l+1<<endl;
    return 0;
}
