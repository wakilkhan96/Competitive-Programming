#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, m, _h, _m;
    cin >> n;

	vector<pair<int, int> > times;
	int striks = 1, max_cash = 1;

	cin>>h>>m;
	times.push_back({h, m});
    for (int i = 1; i < n; i++)
    {
		cin>>h>>m;
		times.push_back({h, m});
		_h = times[i-1].first;
		_m = times[i-1].second;
		//cout<<_h<<" "<<_m<<endl;
		if(h==_h && m==_m) striks++;
		else striks = 1;

		//cout<<striks<<endl;
		max_cash = max(max_cash, striks);
    }

	cout<<max_cash<<"\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}