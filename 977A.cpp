#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    ll i,n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
            n/=10;
        else
            n--;
    }
    cout<<n<<endl;
    return 0;
}