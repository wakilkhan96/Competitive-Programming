#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    while(getline(cin, ss))
    {
        //getline(cin, ss);
        int len = ss.size();
        map<char,int> mp;
        int _max = 0;
        for(int x=0; x<len; x++)
        {
            if(isalpha(ss[x])) mp[ss[x]]++;
            if(mp[ss[x]]>_max) _max = mp[ss[x]];
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==_max) cout<<it->first;
        }
        cout<<" "<<_max<<'\n';
    }

    return 0;
}
