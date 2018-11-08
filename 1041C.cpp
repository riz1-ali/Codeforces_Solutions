#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define lp(n) for(int i=0;i<n;i++)
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,d,a,b;
    cin>>n>>m>>d;
    int ans[n+1],arr[n+1];
   	set<pair<int,int> >s;
    lp(n)
    {
    	cin>>arr[i+1];
    	s.insert(mp(arr[i+1],i+1));
    }
    int c=0,p;
    while(!s.empty())
    {
    	c++;
    	p=s.begin()->s;
    	ans[p]=c;
    	s.erase(s.begin());
    	while(1)
    	{
    		set<pair<int,int> >::iterator it=s.lower_bound({arr[p]+1+d,0});
    		if(it==s.end())
    			break;
    		p=it->s;
    		s.erase(it);
    		ans[p]=c;
    	}
    }
    cout<<c<<endl;
    lp(n)
    	cout<<ans[i+1]<<" ";
    cout<<endl;
    return 0;
}