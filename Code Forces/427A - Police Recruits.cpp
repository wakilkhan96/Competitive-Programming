#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, police = 0, cnt = 0;
	cin>>n; 
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x==-1)
		{
			if(police>0) police--;
			else cnt++;
		}
		else police += x;
	}

	cout<<cnt<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

