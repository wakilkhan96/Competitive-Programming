
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[3] = {'H', 'Q', '9'};
    string str;
    cin>>str;
    
    int size = str.size(), cou = 0;
    for(int x=0; x<size; x++)
    {
        char ch = str[x];
        if(ch==arr[0]) cou++;
        else if(ch==arr[1]) cou++;
        else if(ch==arr[2]) cou++;
    }
    if(cou) cout<<"YES\n";
    else cout<<"NO\n";
}