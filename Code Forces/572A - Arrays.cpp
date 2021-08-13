
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

bool cmp(int a, int b)
{
	return a>b;
} 

void solve()
{
	int nA, nB, k, m, val;
	cin>>nA>>nB;
	cin>>k>>m;
	vector<int> A, B;

	for(int i=0; i<nA; i++)
	{
		cin>>val;
		A.push_back(val);
	}
	for(int i=0; i<nB; i++)
	{
		cin>>val;
		B.push_back(val);
	}
	
	sort(B.begin(), B.end(), cmp);

	if(A[k-1] < B[m-1]) cout<<"YES\n";
	else cout<<"NO\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

