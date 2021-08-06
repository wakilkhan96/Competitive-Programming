#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, carry = 1, cou = 1;
    cin>> n;

    string str;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='1' && carry == 1) cou++;
        else carry = 0;
    }
    cout<<min(n,cou)<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








