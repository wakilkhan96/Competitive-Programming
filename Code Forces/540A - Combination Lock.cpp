
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    string str, ans;
    int n, cnt(0);
    cin>>n>>str>>ans;

    for(int i=0; i<n; i++)
    {
        int diff = abs((str[i]-'0')-(ans[i]-'0'));
        cnt += min( diff, 10-diff);
    }
    cout<<cnt<<"\n";


}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


