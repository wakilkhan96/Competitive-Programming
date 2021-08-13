
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n1, n2;
	cin>>n1>>n2;
	cout<<min(n1, n2)<<" ";
	if(n1<n2) swap(n1, n2);
	n1 -= n2;
	cout<<n1/2<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

*/
