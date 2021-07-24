#include <bits/stdc++.h>
using namespace std;

class binary
{
    public:
        string s;
};

binary operator + (binary a, binary b)
{
    binary obj;
    obj.s= "";
    for(int i=0; i<a.s.size(); i++)
    {
        obj.s += (a.s[i]!=b.s[i])? '1' : '0';
    }
    return obj;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    binary a, b;
    
    cin>>a.s>>b.s;
    cout<<(a+b).s<<"\n";
    return 0;
}
