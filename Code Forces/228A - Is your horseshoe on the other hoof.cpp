#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int s, n, x, y;
	map<int, int> mp;
	mp.clear();

	for(int i = 0; i < 4; i++)
	{
		cin >>x;
		mp[x]++;
	}
	
	cout<<4-mp.size()<<"\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}