#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, groups;
	string str, prev_str;
	cin>>n; 

	cin>>prev_str;
	groups = 1;
	for(int i=1; i<n; i++)
	{
		cin>>str;
		if(str!=prev_str)
		{
			prev_str=str;
			groups++;
		}
		
	}
	cout<<groups<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


