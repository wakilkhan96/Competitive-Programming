#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int m, n, cnt(0);
	char grid[105][105];
	cin>>n>>m;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++) cin>> grid[i][j];
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(grid[i][j]=='-')
			{
				cout << grid[i][j];
				continue;
			} 
			if(i%2==1)
			{
				if(j%2==0) cout<<"W";
				else cout<<"B";
			}
			else
			{
				if(j%2==0) cout<<"B";
				else cout<<"W";
			}
		}
		cout<<"\n";
	}
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








