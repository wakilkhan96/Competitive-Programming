
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    map<int, int>mp;
    for(int x=0; x<n; x++)
    {
        cin>>v;
        mp[v] = x+1;
    }
    
    for(int x=0; x<n; x++)
        cout<<mp[x+1]<<" ";
    cout<<"\n";
    
}