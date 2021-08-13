
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, Vi, Hi;
	vector<int> v(55, 0), h(55, 0);
	cin>>n;
	n = n*n;
	for(int i=0; i<n; i++)
	{
		cin>>Vi>>Hi;
		if(!v[Vi] && !h[Hi])
		{
			v[Vi]++, h[Hi]++;
			cout<<i+1<<" ";
		}
	}
	cout<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

*/
