#include <bits/stdc++.h>
using namespace std;

bool isAlphabet(char ch)
{
    if(ch>='a' && ch<='z') return true;
    if(ch>='A' && ch<='Z') return true;
    return false;
}
char toUpper(char ch)
{
    if(ch>='a' && ch<='z') return ch-32;
    return ch;
}



map<char,int> mp;

void show()
{
    vector<pair<char, int> >mpCopy(mp.begin(), mp.end());
    sort(mpCopy.begin(), mpCopy.end(), [](const pair<char, int> a, const pair<char, int> b)
    {
        if(a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });
    
    for(auto it=mpCopy.begin(); it!=mpCopy.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<'\n';
    }
}


void go(string ss)
{
    //cout<<ss<<endl;
    int len = ss.size();

    for(int x=0; x<len; x++)
    {
        if(isAlphabet(ss[x]))
        {
            char ch = ss[x];
            ch = toUpper(ch);
            mp[ch]++;
        } 
        
    }
        
}

int main()
{
    //freopen("myfile.txt", "w", stdout);
    //ios_base::sync_with_stdio(0);
    //cin.ignore();
    //cin.tie(0);
    int n;
    string ss = "", str;

    cin>>n;
    cin.ignore();
    
    mp.clear();
    for(int x=0; x<n; x++)
    {
        getline(cin, ss);
        go(ss);
    }
    
    show();

    return 0;
}
