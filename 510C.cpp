#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(n) for(int i=0;i<n;i++)
string arr[110];
int n;
bool edges[26][26];
int starts[26];
int finish[26];
int done[26];
int times=0;
queue<int> q;
bool dfs(int source)
{
	done[source]=1;
	starts[source]=times;
	times++;
	for(int j=0;j<26;j++)
	{
		if(edges[source][j]==true && done[j]!=2)
		{
			if(done[j]==1)
			return false;
			
			
			bool val=dfs(j);
			if(val==false)
			return false;
			
		}
	}
	finish[source]=times;
	times++;
	done[source]=2;
	q.push(source);
	return true;
}

int main()
{
	cin>>n;
	lp(n)
		cin>>arr[i];
	lp(26)
	{
		for(int j=0;j<26;j++)
		{
		   edges[i][j]=false;
		   done[i]=0;
 	    } 
	}
	lp(n-1)
	{
		int len1=arr[i].size();
		int len2=arr[i+1].size();
		if(len1>len2)
		{
			int j;
			for(j=0;j<len2;j++)
			{
				if(arr[i][j]!=arr[i+1][j])
				{
					edges[arr[i+1][j]-'a'][arr[i][j]-'a']=true;
					j=0;
					break;
				}
		    }
			if(j==len2)
			{
			cout<<"Impossible\n";
			return 0;
		    }	
		}
		else
		{
			for(int j=0;j<len1;j++)
			{
				if(arr[i][j]!=arr[i+1][j])
				{
					edges[arr[i+1][j]-'a'][arr[i][j]-'a']=true;
					break;
				}
			}
		}	
	}
	lp(26)
	{
		if(!done[i])
		{
			if(!dfs(i))
			{
				cout<<"Impossible\n";
				return 0;
			}
		}
	}
	while(q.empty()==false)
	{
		char top=q.front()+'a';
		q.pop();
		cout<<top;
	}
	cout<<endl;
	return 0;	
}