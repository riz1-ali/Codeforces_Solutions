#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
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
	int a[256],b[256],c[256],n,ma,mb,mc;
	string p,q,r;
    cin>>n;
    cin>>p>>q>>r;
    int pl,ql,rl;
    lp(256)
    	a[i]=b[i]=c[i]=0;
    for (char x: p)
    	ma = max(ma, ++a[x]);
    for (char x: q)
    	mb = max(mb, ++b[x]);
    for (char x: r)
    	mc = max(mc, ++c[x]);
    pl=p.length();
    ql=q.length();
    rl=r.length();
    if (n==1 && ma ==p.length())
    	pl--;
    if (n==1 && mb ==q.length())
    	ql--;
    if (n==1 && mc ==r.length())
    	rl--;
    ma = min(ma+n,pl);
    mb = min(mb+n,ql);
    mc = min(mc+n,rl);
    if(ma>mb && ma>mc)
    	cout<<"Kuro\n";
    else if(mb>ma && mb>mc)
    	cout<<"Shiro\n";
    else if(mc>ma && mc>mb)
    	cout<<"Katie\n";
    else
    	cout<<"Draw\n";
    return 0;
}