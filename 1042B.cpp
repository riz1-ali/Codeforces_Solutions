#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int n;
map<string, int> m;
inline int getC(string a, string b)
{
 	if (!m.count(a) || !m.count(b)) 
 		return inf;
 	return m[a] + m[b];
}
int main ()
{
    cin>>n;
	for(int i = 0; i < n; i++)
	{
		int c;
		string s;
		cin>>c>>s;
		sort(s.begin(), s.end());
		if (m.count(s)==0)
			m[s]=c;
		else
			m[s]=min(m[s],c);
	}
	int ans = inf;
	if (m.count("A") && m.count("B") && m.count("C")) {
		ans = m["A"] + m["B"] + m["C"];
	}
    if (m.count("ABC")) {
    	ans = min(ans, m["ABC"]);
    }
    ans = min(ans,getC("AB","C"));
    ans = min(ans,getC("A","BC"));
    ans = min(ans,getC("AC","B"));
    ans = min(ans,getC("AB","BC"));
    ans = min(ans,getC("AC","BC"));
    ans = min(ans,getC("AC","AB"));
    if (ans == inf)
    	ans = -1;
    cout<<ans<<endl;
}