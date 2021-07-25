#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, c, rem, maxi = 0;
	cin>>n>>a>>b>>c;

	int cou = 0;
	for(int x=0; a*x<=n; x++)
	{
		for(int y=0; a*x + b*y<=n; y++)
		{
			rem = n - (a*x + b*y);
			if(rem%c==0)
			{
				int z = rem/c;
				maxi = max(maxi, x+y+z);
			}
		}
	}

	cout<<maxi<<"\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}