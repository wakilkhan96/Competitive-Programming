#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cards[1005];
	cin>>n;
	for(int x=0; x<n; x++) cin>>cards[x];
	int sereja(0), dima(0);
	for(int i=0, j=n-1, turn=1; i<=j; turn++)
	{
		if(turn&1) sereja += max(cards[i], cards[j]);
		else dima += max(cards[i], cards[j]);

		if(cards[i]>cards[j]) i++;
		else j--;
	}

	cout<<sereja<<" "<<dima<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

