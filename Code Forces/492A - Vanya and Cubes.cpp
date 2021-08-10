#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,h = 0, i = 1,cnt(0);
    cin>>n;
	while (true)
	{
		cnt += (i*(i+1))/2;
        if(cnt<=n) h++;
        else break;
        i++;
	}
    //cout<<cnt<<endl;
    cout<<h<<endl;

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








