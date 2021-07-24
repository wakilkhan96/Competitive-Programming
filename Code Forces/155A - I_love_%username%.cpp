#include<bits/stdc++.h>
using namespace std;

bool arr[10005];

void solve()
{
    int n, score[1005], _min, _max, cou = 0;
	cin >> n;
	for(int x=0; x<n; x++) cin>>score[x];
	
	_max = _min = score[0];
	for(int x=1; x<n; x++)
	{
		if(score[x]>_max) _max = score[x], cou++;
		else if(score[x]<_min) _min = score[x], cou++;
	}
	cout<<cou<<"\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}