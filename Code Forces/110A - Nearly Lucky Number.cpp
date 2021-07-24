#include <bits/stdc++.h>
using namespace std;

bool check(string str, int index)
{
    if(str[index]=='4' || str[index]=='7' ) return true;
    return false;
}

int main ()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    
    string str;
    cin>>str;
    int size = str.size(), count = 0;
    
    for(int x=0; x<size; x++)
    {
        if(check(str, x))  count++;
    }
    
    
    str = to_string(count);
    size = str.size();
    bool flag = true;
    for(int x=0; x<size; x++)
    {
        if(check(str, x))  flag &= true;
        else flag &= false;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
