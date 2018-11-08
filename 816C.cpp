#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a,b) __gcd(a,b)
#define lp(i,n) for(int i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<vi> vvi;

int main()
{
  int n, m;
  cin>>n>>m;
  
  vvi finish(n);
  lp(i,n)
  {
    vi row(m);
    lp(j,m)
      cin >> row[j];
    finish[i] = row;
  }
  
  int count = 0;
  string steps = "";
  
  if (n < m)
  {
    lp(i,n)
    {
      int min = *min_element(begin(finish[i]), end(finish[i]));
      if (min > 0)
      {
        lp(j,m)
          finish[i][j] -= min;        
        lp(s,min)
          steps += "row " + to_string(i + 1) + "\n";
        count += min;
      }
    }
    lp(j,m)
    {
      vi c;
      lp(i,n)
        c.push_back(finish[i][j]);
      int min = *min_element(begin(c), end(c));
      if (min > 0) 
      {
        lp(i,n)
          finish[i][j] -= min;
        lp(s,min)
          steps += "col " + to_string(j + 1) + "\n";
        count += min;
      }
    }
  }
  else
  {
    lp(j,m)
    {
      vi c;
      lp(i,n)
        c.push_back(finish[i][j]); 
      int min = *min_element(begin(c), end(c));
      if (min > 0)
      {
        lp(i,n)
          finish[i][j] -= min;
        lp(s,min)
          steps += "col " + to_string(j + 1) + "\n";
        count += min;
      }
    }
    
    lp(i,n)
    {
      int min = *min_element(begin(finish[i]), end(finish[i]));
      if (min > 0)
      {
        lp(j,m)
          finish[i][j] -= min;
        lp(s,min)
          steps += "row " + to_string(i + 1) + "\n";
        count += min;
      }
    }
  }
  lp(i,n)
  	lp(j,m)
  		if(finish[i][j] != 0)
  		{
  			cout<<"-1\n";
        	return 0;
        }
  cout << count << "\n" << steps;
  return 0;
}
