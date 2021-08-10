
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    int n, cnt(0);
    string str;
    cin>>n; 
    cin>>str;

    map<char, int> mp;
    n = 2*n-2;
    for(int i=0; i<n; i++)
    {
        if((i+1)%2==1) mp[str[i]]++;
        else
        {
            char ch = str[i];
            ch += 32;
            //cout<<ch<<"-"<<mp[ch]<<endl;
            if(mp[ch]>=1) mp[ch]--;
            else cnt++;
        }
        
    }
    cout<<cnt<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}
