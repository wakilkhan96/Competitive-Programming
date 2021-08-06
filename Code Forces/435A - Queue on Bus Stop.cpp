#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
    int n, m, p, x, cnt(0);
	cin>>n>>m; 
	
	p = 0;
	for(int i=0; i<n; i++)
	{
		cin>>x; 
		if(p+x<=m) p +=x;
		else p = x, cnt++;
	} 
	if(p>0) cnt++;
	cout<<cnt<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

