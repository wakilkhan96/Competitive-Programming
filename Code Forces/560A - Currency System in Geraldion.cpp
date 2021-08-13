
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, a, res = 1;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		if(a==1) res = -1;
	}
	cout<<res<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

