#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, z, sum = 0, cou = 0;
	cin>>n;
	for(int x=0; x<n; x++)
	{
		cin>>z;
		sum += z;
	}
	//cout<<sum<<endl;
	for(int x=1; x<=5; x++)
	{
		if((sum+x-1)%(n+1)!=0) cou++;
	}
	cout<<cou<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


