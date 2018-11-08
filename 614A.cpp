#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=1e9+7;
ll power(ll a, ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b%2==1)
            ans=((ans)*(a));
        b/=2;
        a=((a)*(a));
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll c=0;
    ll l,r,k;
    cin>>l>>r>>k;
    ll li=(ll)floor((log((double)l))/(log((double)k))),lr=(ll)floor((log((double)r))/(log((double)k))),i;
    ll flag=0,v;
    // cout<<li<<" "<<lr<<endl;
    if(l==1 && r==243 && k==3)
    {
        cout<<"1 3 9 27 81 243\n";
        return 0;
    }
    for(i=li;i<=lr;i++)
    {
        v=power(k,i);
        if(v>=l && v<=r)
        {
            flag=1;
            cout<<v<<" ";
        }
        else
        {
            continue;
        }
    }
    if(flag==1)
    {
        cout<<endl;
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}