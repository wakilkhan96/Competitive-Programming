#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, levels, cou(0);
    map<int, int> mp;
    cin>>levels; 

    cin>>n; 
    for(int i=0; i<n; i++)
    {
        cin >>x;
        mp[x]++;
    }
    cin>>n; 
    for(int i=0; i<n; i++)
    {
        cin >>x;
        mp[x]++;
    }
    
    if(mp.size()==levels)cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








