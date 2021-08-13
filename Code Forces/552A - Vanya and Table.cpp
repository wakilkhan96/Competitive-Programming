
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	long long i, n, m, x1, y1, x2, y2, ans = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		ans += (x2-x1+1)*(y2-y1+1);
	}
	cout << ans << "\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
There are n operation, each operation will be a rectangular area plus.
Get sum of all areas.
*/