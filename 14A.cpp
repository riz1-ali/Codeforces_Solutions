#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<set<char>> rows;
    vector<set<char>> columns;
    char input[50][50];
    char c;
    int n, m;
    cin >> n >> m;
    rows.resize(n);
    columns.resize(m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;
            input[i][j] = c;
            columns[j].insert(c);
            rows[i].insert(c);
        }
    }
    int top = n/2, bottom = n/2, left = m/2, right = m/2;
    int i = 0;
    while(i < n)
    {
        if(rows[i].count('*')) 
        {
            top = i;
            break;
        }
        else
            i++;
    }
    i = n - 1;
    while(n >= 0)
    {
        if(rows[i].count('*'))
        {
            bottom = i;
            break;
        }
        else
            i--;
    }
    int j = 0;
    while(j < m)
    {
        if(columns[j].count('*')) 
        {
            left = j;
            break;
        }
        else
            j++;
    }
    j = m - 1;
    while(m >= 0)
    {
        if(columns[j].count('*'))
        {
            right = j;
            break;
        }
        else
            j--;
    }
    for(int i = top; i < bottom+1; i++)
    {
        for(int j = left; j < right+1; j++)
            cout << input[i][j];
        cout << endl;
    }
    return 0;
}