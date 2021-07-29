#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, arr[105], s, t;
	cin>>n;
	for(int x=0; x<n; x++)	cin>>arr[x];
	cin>>s>>t;

	int min_dist = 0;
	if(s!=t) min_dist = 0;
	{
		if(s>t) swap(s, t);
		int route1 = 0, route2 = 0;
		for(int i=0; i<s-1; i++) route1 += arr[i];
		for(int i=t-1; i<n; i++) route1 += arr[i];

		for(int i=s-1; i<t-1; i++) route2 += arr[i];

		min_dist = min(route1, route2);
	}
	cout<<min_dist<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


