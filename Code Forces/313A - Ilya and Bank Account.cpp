#include <bits/stdc++.h>
#define fast_io  ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
int cmp(int a, int b) { return a>b; }
 
 
int main()
{
    fast_io;
 
    int test, n, m, i;
    string str;
    cin >> str;
    int length = str.length();
    if( str[0]=='-')
    {
        if(str[length-2]>str[length-1]) str.erase(str.begin()+length-2);
        else str.erase(str.begin()+length-1);
        length--;
        if(length == 2 && str[1]=='0') str = "0";
    }
    cout<<str<<'\n';
 
}