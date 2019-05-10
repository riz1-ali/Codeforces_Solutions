#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod=1000000007;
typedef long double ld;
typedef pair<ll,ll> pll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()
map<ll,string> rev_map;
ll dp[100010];
struct Trie
{
	struct Trie* str[26];
	ll end_point;
};
Trie* root=NULL;
Trie* make_node()
{
	Trie* node= new Trie;
	node->end_point=-1;
	lp(26)
		node->str[i]=NULL;
	return node;
}
void insert_trie(string s,ll index)
{
	ll i,j;
	Trie* node=root;
	for(ll i=0;i<s.size();i++)
	{
		if(s[i]>='A' and s[i]<='Z')
			s[i]=(char)(s[i]+32);
		if(node->str[s[i]-'a']==NULL)
			node->str[s[i]-'a']=make_node();
		node=node->str[s[i]-'a'];
	}
	node->end_point=index;
}
void print_trie(Trie* roots,string his)
{
	if(roots->end_point!=-1)
		cout<<his<<" "<<roots->end_point<<endl;
	lp(26)
	{
		string act=his;
		if(roots->str[i]!=NULL)
		{
			act+=(char)(i+'a');
			print_trie(roots->str[i],act);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	root = make_node();
	ll n,m;
	string sent,a;
	cin>>n>>sent>>m;
	sent=" "+sent;
	lp(m)
	{
		cin>>a;
		rev_map[i]=a;
		insert_trie(a,i);
	}
	// print_trie(root,"");
	// return 0;
	memset(dp,255,sizeof(dp));
	dp[0]=1e18;
	for(ll i=1;i<=n;i++)
	{
		Trie* cur=root;
		// cout<<i<<" + "<<dp[i]<<endl;
		for(ll j=i;j>=0;j--)
		{
			// cout<<i<<" "<<j<<" "<<cur->end_point<<" "<<dp[j]<<" "<<sent[j]<<endl;
			if(cur->end_point!=-1 and dp[j]!=-1)
			{
				dp[i]=cur->end_point;
				break;
			}
			if(cur->str[sent[j]-'a']==NULL)
				break;
			cur=cur->str[sent[j]-'a'];
		}
		// cout<<i<<" + "<<dp[i]<<endl;
	}
	// for(ll i=n;i>=0;i--)
	// 	cout<<dp[i]<<" ";
	// cout<<endl;
	vector<ll> rev;
	for(ll i=n;i>0;)
	{
		rev.pb(dp[i]);
		i-=(ll)rev_map[dp[i]].size();
	}
	reverse(all(rev));
	for(ll i=0;i<rev.size();i++)
		cout<<rev_map[rev[i]]<<" ";
	cout<<endl;
	return 0;
}
