
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; 
    cin>>n;
    string str; 
    cin>>str;
    map<char, int> mp; 

    for(int i=0; i<n; i++)
    {
        if(str[i]>='A' and str[i]<='Z') str[i] += 32;
        mp[str[i]]++; 
    }

    if(mp.size()==26) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








