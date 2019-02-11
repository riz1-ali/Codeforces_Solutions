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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string a,b;
	cin>>a>>b;
	if(a.size()!=b.size())
	{
		cout<<"No\n";
		return 0;
	}
	set<char> vowel,consonant;
	vowel.insert('a');
	vowel.insert('e');
	vowel.insert('i');
	vowel.insert('o');
	vowel.insert('u');
	for(int i=0;i<26;i++)
		consonant.insert((char)(i+'a'));
	consonant.erase('a');
	consonant.erase('e');
	consonant.erase('i');
	consonant.erase('o');
	consonant.erase('u');
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=b[i])
		{
			if((vowel.find(a[i])!=vowel.end() and vowel.find(b[i])!=vowel.end()) or (consonant.find(a[i])!=consonant.end() and consonant.find(b[i])!=consonant.end()))
				continue;
			else
			{
				cout<<"No\n";
				return 0;
			}
		}
	}
	cout<<"Yes\n";
	return 0;
}
