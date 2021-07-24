
#include <bits/stdc++.h>
using namespace std;

bool isLucky(char ch)
{
    if(ch=='4' || ch=='7') return true;
    return false;
}

int main()
{
    int n, fh = 0, sh = 0;
    cin>>n;
    
    string str;
    cin>>str;
    
    bool lucky = true;
    for(int x=0; x<n; x++)
    {
        lucky &= isLucky(str[x]);
        if( !lucky ) break;
        if(x>=n/2) sh += (str[x]-'0');
        else fh += (str[x]-'0');
    }
    
   if( !lucky ) cout<<"NO\n";
   else if(fh != sh) cout<<"NO\n";
   else cout<<"YES\n";
    
}