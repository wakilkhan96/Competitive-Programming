#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, Ti, Fi;
	int max_joy = 0;

	cin>>n>>k;
	
	cin>>Fi>>Ti;
	if(Ti>k) max_joy = Fi-(Ti-k);
	else max_joy = Fi;

	for(int x=1; x<n; x++)
	{
		cin>>Fi>>Ti;
		if(Ti>k) max_joy = max(max_joy, Fi-(Ti-k));
		else max_joy = max(max_joy, Fi);
	}

	cout<<max_joy<<"\n";
	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


