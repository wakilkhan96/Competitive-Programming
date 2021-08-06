#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k, total_cup(0), total_medal(0);

	for(int i=0; i<3; i++) cin>>k, total_cup += k;
	for(int i=0; i<3; i++) cin>>k, total_medal += k;
	cin>> n;

	int shelves_needed = 0;
	shelves_needed = ( (total_cup/5) + (total_cup%5? 1 : 0) );
	shelves_needed += ( (total_medal/10) + (total_medal%10? 1 : 0) );
	
	if(shelves_needed<=n) cout<<"YES\n";
	else cout<<"NO\n";

	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








