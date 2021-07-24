#include <bits/stdc++.h>
using namespace std;

char toUpper(char ch){
    if(ch>='a' && ch<='z') ch -= 32;
    return ch;
}
char toLower(char ch){
    if(ch>='A' && ch<='Z') ch += 32;
    return ch;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str, res1="", res2="";
    cin>>str;
    res1 = str;
    res2 = str;
    int len = str.size(), cou = 0;
    for(int x=0; x<len; x++)
    {
        if(str[x]>='a' && str[x]<='z') cou++;
        res1[x] = toLower(str[x]);
        res2[x] = toUpper(str[x]);
    }
    if(cou>=(len-cou)) cout<<res1<<'\n';
    else cout<<res2<<'\n';
    
    return 0;
    
}




/*



*/