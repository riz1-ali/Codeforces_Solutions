#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,h,i,x,y,d,m=0,lb,ub,mid;
    cin>>n>>h;
    vector<pair<ll,ll> > a;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        a.pb(mp(x,y));
    }
    vector<ll> h1(n,0);
    for(i=1;i<n;i++)
    {
        h1[i]=a[i].f-a[i-1].s+h1[i-1];
    }
    for(i=0;i<n;i++)
    {
        lb=i+1;ub=n-1;mid=(lb+ub)/2;
        while(lb<=ub)
        {
            if(h1[mid]-h1[i]<h)
                lb=mid+1;
            else
                ub=mid-1;
            mid=(lb+ub)/2;
        }
        d=a[ub].s-a[i].f+h-(h1[ub]-h1[i]);
        m=max(d,m);
    }
    cout<<m<<endl;
    return 0;
}