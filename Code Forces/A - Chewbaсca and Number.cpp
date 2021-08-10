
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str, str2;
    cin>>str2;
    str = str2;
    int size = 0;
    size = str.size();
    for(int i=0; i<size; i++)
    {
        if(9-(str[i]-'0')< (str[i]-'0'))
        {
            str[i] = '0'+ (9-(str[i]-'0'));
        }
    }
    // string ans = "";
    // int i = 0;
    // while(str[i]=='0') i++;
    // while(i<size) ans += str[i++];
    // if(ans=="") ans = "0";
    // cout<<ans<<"\n";
    str[0] = str[0]=='0'? str2[0]: str[0]; 
    cout<<str<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








