#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c, x[110], max_profit = 0;
	cin>>n>>c;
	
	cin>>x[0];
	for(int i=1; i<n; i++)
	{
		cin>>x[i];
		if( x[i] < x[i-1] ) 
			max_profit = max(max_profit, x[i-1]-x[i]-c);
	}

	cout<<max_profit<<"\n";
	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

