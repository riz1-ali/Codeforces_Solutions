#include<bits/stdc++.h>
using namespace std;
set<string> s;
map<string,string> m;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	s.insert("Power");
	m["purple"]="Power";
	s.insert("Time");
	m["green"]="Time";
	s.insert("Space");
	m["blue"]="Space";
	s.insert("Soul");
	m["orange"]="Soul";
	s.insert("Reality");
	m["red"]="Reality";
	s.insert("Mind");
	m["yellow"]="Mind";
	int n;
	cin>>n;
	string str;
	while(n--)
	{
		cin>>str;
		s.erase(m[str]);
	}
	cout<<s.size()<<endl;
	for(set<string>::iterator it=s.begin();it!=s.end();it++)
		cout<<*it<<endl;
	return 0;
}