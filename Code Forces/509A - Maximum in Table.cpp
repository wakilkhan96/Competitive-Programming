
#include<bits/stdc++.h>
using namespace std;

int  go(int r, int c)
{
    if(r==1 || c==1) return 1;
    return go(r-1, c) + go(r, c-1);
}
void solve()
{
    int n;
    cin>>n;
    cout<<go(n, n)<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








