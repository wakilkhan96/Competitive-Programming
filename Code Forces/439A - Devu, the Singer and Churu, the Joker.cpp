#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
    int n, d, x, time(0), cnt(0);
	cin>>n>>d;

	for(int i=0; i<n; i++)
	{
		cin>>x; 
		time += x;
		if(i<n-1) time += 10, cnt += 2;
	} 
	
	if(time>d) cout<<"-1\n";
	else
	{
		if(d-time>=5) cnt += (d-time)/5;
		cout<<cnt<<"\n";
	}
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

