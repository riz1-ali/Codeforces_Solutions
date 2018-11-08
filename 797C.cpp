#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	string s;
	cin>>s;
	const int n=s.size();
    char best[n+1];
    best[n]='z';
    for(int i=n-1;i>=0;i--)
        best[i]=min(best[i+1],s[i]);
    deque<char> dq;
    int cur=0;
    while(!dq.empty()||cur<n)
    {
        if(!dq.empty()&&dq.front()<=best[cur])
        {
            cout<<dq.front();
            dq.pop_front();
        }
        else dq.push_front(s[cur++]);
    } 
    cout<<endl;
    return 0;
}