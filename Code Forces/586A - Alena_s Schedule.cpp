
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, cnt(0);
	vector<int> v(100);
	cin>>n;
	for(int i=0; i<n; i++) cin>>v[i], cnt += v[i];
	for(int i=1; i<n-1; i++)
	{
		if(v[i]==0)
		{
			if(v[i-1]==1 && v[i+1]==1) cnt++;
		}
	}
	cout<<cnt<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

*/
