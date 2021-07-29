#include<bits/stdc++.h>
using namespace std;

bool isValid(int i, int n)
{
	if(i>=0 && i<n) return true;
	return false;
}

void solve()
{
    int n, arr[105], shots, x, y;
	cin>>n;
	for(int x=0; x<n; x++)	cin>>arr[x];
	
	cin>>shots;
	for(int i=0; i<shots; i++) 
	{
		cin>>x>>y;
		x--;
		if(isValid(x-1, n)) arr[x-1] += (y-1);
		if(isValid(x+1, n)) arr[x+1] += (arr[x]-y);
		arr[x] = 0;

	}
	for(int i=0; i<n; i++) cout<<arr[i]<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


