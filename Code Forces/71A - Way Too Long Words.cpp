#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    int n, size;
    cin>>n;
    while(n--)
    {
        cin>>str;
        size = str.size();
        if(size>10)
        {
            cout<<str[0]<<size-2<<str[size-1]<<"\n";
        }
        else cout<<str<<"\n";
    }
// sync_with
    return 0;
}
