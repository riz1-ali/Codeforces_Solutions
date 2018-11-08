#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    ll a[100010];
    ll w,y,i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>a[i];
    w=1;
    y=n%a[1];
    for(i=2;i<=m;i++)
    {
        if(n%a[i]<y)
        {
            w=i;
            y=n%a[i];
        }
    }
  	cout<<w<<" "<<n/a[w];
    return 0;
}