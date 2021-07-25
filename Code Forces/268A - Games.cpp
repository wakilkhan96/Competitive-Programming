#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, home, away;
	vector<pair<int, int> > uniform;
	map<int, int> home_uniform, away_uniform;

	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>home>>away;
		uniform.push_back({home, away});
		home_uniform[home]++, away_uniform[away]++;
	}
	int total_change = 0;
	for(int i=0; i<n; i++)
	{
		home = uniform[i].first;
		away = uniform[i].second;
		total_change += away_uniform[home];
	}

	cout<<total_change<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}