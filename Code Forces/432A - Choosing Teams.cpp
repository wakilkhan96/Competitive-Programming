#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x, cnt = 0;
	cin>>n>>k; 
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x+k<=5) cnt++;
	}

	cout<<cnt/3<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

