#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll d=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    ll i,n,j,max=0,curl,curr;
    cin>>n;
    string s;
    cin>>s;
    char a,b;
    ll c;
    for(i=0;i<n-1;i++)
    {
        a=s[i];
        b=s[i+1];
        c=0;
        for(j=0;j<n-1;j++)
        {
            if(a==s[j] && b==s[j+1])
            {
                c++;
                if(c>max)
                {
                    max=c;
                    curl=j;
                    curr=j+1;
                }
            }
        }
    }
    cout<<s[curl]<<s[curr]<<endl;
    return 0;
}