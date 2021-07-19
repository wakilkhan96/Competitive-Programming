#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(); cin.tie(); cout.tie(0);

int main()
{
    fast_io;
    int test, n;
    string str, temp_str;
    vector<string> str_vec;
    cin>>test;
    while(test--)
    {
        cin>>n;
        str_vec.clear();
        for(int x=0; x<n; x++)
        {
            cin>>str;
            str_vec.push_back(str);
        }
        
        sort(str_vec.begin(), str_vec.end());
        
        bool consistent = true;
        map<string, int> mp;
        
        for(int x=0; x<n && consistent; x++)
        {
            str = str_vec[x], temp_str = "";
            int len = str.length();
            for(int y=0; y<len && consistent; y++)
            {
                temp_str += str[y];
                //cout<<temp_str<<"->"<<mp[temp_str]<<endl;
                if(mp[temp_str]>=1) consistent &= false;
            }
            
            mp[str]++;
        }
        
        if(consistent) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}
