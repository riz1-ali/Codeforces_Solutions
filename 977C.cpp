#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    ll i,n,k;
    cin>>n>>k;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(k==0)
    {
        if(arr[0]>1)
            cout<<arr[0]-1<<endl;
        else
            cout<<"-1\n";
        return 0;
    }
    if(arr[k]!=arr[k-1])
        cout<<arr[k-1]<<endl;
    else
        cout<<"-1\n";
    return 0;
}