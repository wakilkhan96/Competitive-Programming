
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    map<char, int> mp;
    mp['Q'] = 9, mp['q'] = 9;
    mp['R'] = 5, mp['r'] = 5;
    mp['B'] = 3, mp['b'] = 3;
    mp['N'] = 3, mp['n'] = 3;
    mp['P'] = 1, mp['p'] = 1;
    mp['K'] = 0, mp['k'] = 0;

    char ch;
    int white(0), black(0);

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin>> ch;
            if(ch!='.')
            {
                if(ch>='A' && ch<='Z') white += mp[ch];
                else black += mp[ch];
            }

        } 
    }

    if(white==black) cout<<"Draw\n";
    else if(white>black) cout<<"White\n";
    else cout<<"Black\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








