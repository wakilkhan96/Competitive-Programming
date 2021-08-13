
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> location(1e5+5);
	for(int i=0; i<n; i++) cin>>location[i];
	for(int i=0; i<n; i++)
	{
		int left_index, right_index;
		left_index = i-1;
		right_index = i+1;
		if(left_index<0) left_index = right_index;
		if(right_index>=n) right_index = left_index;
		// cout<<abs(location[i]-location[left_index])<<" ";
		// cout<<abs(location[i]-location[right_index])<<" ";

		cout<<min(abs(location[i]-location[left_index]), abs(location[i]-location[right_index]))<<" ";
		cout<<max(abs(location[i]-location[0]), abs(location[i]-location[n-1]))<<"\n";
	}

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

