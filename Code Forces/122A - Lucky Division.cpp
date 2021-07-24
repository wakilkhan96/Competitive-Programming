#include <bits/stdc++.h>
using namespace std;

bool check(string str, int index)
{
    if(str[index]=='4' || str[index]=='7' ) return true;
    return false;
}

bool lucky_number(string str)
{
    bool flag = true;
    int size = str.size();
    for(int x=0; x<size; x++)
    {
        if(check(str, x))  flag &= true;
        else flag &= false;
    }
    if(flag) return true;
    return false;
}

int main ()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    
    //cout<<lucky_number(to_string(4));
    int n;
    cin>>n;
    
    bool flag = false;
    for(int x=1; x<=sqrt(n); x++)
    {
        if(n%x==0) 
        {
            if(lucky_number(to_string(x)) || lucky_number(to_string(n/x)) ) flag |= true;
        }
    }
    
   
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
