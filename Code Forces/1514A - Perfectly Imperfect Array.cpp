#include<bits/stdc++.h>
using namespace std;

bool arr[10005];

void solve()
{
    int test, n, a[10005];
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		bool flag = true;
		for(int x=0; x<n; x++) cin>>a[x], flag &= arr[a[x]];
		string str = flag?"NO\n" : "YES\n";
		cout<<str;

	}

}

int main()
{
	ios_base::sync_with_stdio;

	for(int x=1; x*x<10005; x++) arr[x*x] = true;
	solve();
}