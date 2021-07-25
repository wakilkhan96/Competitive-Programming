#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, answer(0);
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            answer += 1;
        }
    }

    cout << answer << endl;

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}