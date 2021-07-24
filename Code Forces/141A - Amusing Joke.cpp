
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, ss;
    cin>>ss;
    cin>>str;
    ss = ss + str;
    cin>>str;
    sort(str.begin(), str.end());
    sort(ss.begin(), ss.end());
    if(ss==str) cout<<"YES\n";
    else cout<<"NO\n";
    //cout<<"\n";
    
}