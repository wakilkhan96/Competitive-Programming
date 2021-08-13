
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> a(n, 0), b(n, 0);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) 
	{
		for(int j=0; j<n; j++) 
		{
			if(a[i] < a[j]) {
				b[i]++;
			}
		}
	}
	for(int i=0; i<n; i++) cout<<1+b[i]<<' ';
	cout<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

