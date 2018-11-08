#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    ll n=s.size();
    ll c=0;
    for(ll  i=0;i<n;i++)
        if(s[i]=='o')
            c++;
    if(c==0 || (n-c)%c==0)
    {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}