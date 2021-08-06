#include<bits/stdc++.h>
using namespace std;

void solve()
{
	/*
	5 2
1 3 1 4 2
	*/
	int n, m, a;
	cin>>n>>m;
	int max_cnt = 0, cnt = 0, last_child = n;

	for(int i=0; i<n; i++)
	{
		cin>>a;
		if(a%m != 0) cnt = a/m +1;
		else cnt = a/m;

		//cout<<cnt<<"--\n";
		if(cnt>=max_cnt)
		{
			max_cnt =  cnt;
			last_child = i+1;
		}
	}
	cout<<last_child<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








