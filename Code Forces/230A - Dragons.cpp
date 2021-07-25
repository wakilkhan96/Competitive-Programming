#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
	if(p1.first!=p2.first) return p1.first<p2.first;
	return p1.second<p2.second;
}
void solve()
{
    int s, n, x, y;
    cin >>s>>n;
	vector<pair<int, int> > vec;
	for(int i = 0; i < n; i++)
	{
		cin >>x>>y;
		vec.push_back({x, y});
	}
	sort(vec.begin(), vec.end(), cmp);

	bool flag = true; 

	for(int i = 0; i < n && flag; i++)
	{
		x = vec[i].first;
		y = vec[i].second;
		if(s>x) s += y;
		else flag = false;
	}

	cout<<(flag ? "YES\n" : "NO\n");

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}