#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y, odd_even_pair(0), odd_upper(0), odd_lower(0);
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>x>>y; 
		if( (x+y)%2==1) odd_even_pair++;
		if(x%2==1) odd_upper++;
		if(y%2==1) odd_lower++;
	} 
	//cout<<cnt0<<" "<<cnt5<<endl;
	if(odd_upper%2==0 && odd_lower%2==0) cout<<"0\n";
	else if(odd_upper%2==1 && odd_lower%2==1 && odd_even_pair>0)
	{
		cout<<"1\n";
	}
	else cout<<"-1\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

