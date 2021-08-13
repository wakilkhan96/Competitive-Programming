
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, x, cnt(0);
	cin>>n>>x; 
	for(int i=1; i<=n; i++)
	{
		if(x%i==0 && x/i<=n) cnt++;
	}

	cout<<cnt<<endl;
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*
It's easy to see that number x can appear in column i only once — in row x / i. 
For every column i, let's check that x divides i and x / i ≤ n. 
If all requirements are met, we'll update the answer.

The complexity is O(n)
*/
