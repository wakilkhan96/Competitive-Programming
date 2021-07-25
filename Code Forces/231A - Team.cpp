#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,c,cou=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(max(a,b)&&max(b,c)&&max(c,a))cou++;
    }
    cout<<cou<<"\n";
}