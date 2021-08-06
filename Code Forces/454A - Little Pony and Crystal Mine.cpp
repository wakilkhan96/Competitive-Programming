#include<bits/stdc++.h>
using namespace std;

void solve()
{

	int n, m, a;
	cin>>n;

	for(int i=0; i<n/2; i++)
	{
		int k = n/2-i;
		for(int j=0; j<k; j++) cout<<"*";
		for(int j=0; j<i*2+1; j++) cout<<"D";
		for(int j=0; j<k; j++) cout<<"*";
		cout<<"\n";
	}
	for(int i=0; i<n; i++) cout<<"D";
	cout<<"\n";

	for(int i=n/2-1; i>=0; i--)
	{
		int k = n/2-i;
		for(int j=0; j<k; j++) cout<<"*";
		for(int j=0; j<i*2+1; j++) cout<<"D";
		for(int j=0; j<k; j++) cout<<"*";
		cout<<"\n";
	}

	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








