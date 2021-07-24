#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin>>a>>b;
    reverse(a.begin(), a.end());
    if(a==b) cout<<"YES\n";
    else cout<<"NO\n";
}
