#include <bits/stdc++.h>
using namespace std;

bool check(string str, int index, int size)
{
    if(index<1) return true;
    if(str[index]==str[index-1]) return true;
    return false;
}

int main ()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    
    string str;
    cin>>str;
    int size = str.size(), streak = 0, max_streak = 0;
    
    for(int x=0;x<size; x++)
    {
        if(str[x]==str[x-1])
        {
            streak++;
            max_streak = max(max_streak, streak);
        }
        else streak =1;
    }
    
    if(max_streak>=7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
