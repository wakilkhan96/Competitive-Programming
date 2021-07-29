#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, p1(0), p2(0), draw(0);
	cin>>a>>b;
	for(int x=1; x<=6; x++)
	{
		if(abs(x-a)<abs(x-b)) p1++;
		else if(abs(x-a)>abs(x-b)) p2++;
		else draw++;
	}

	cout<<p1<<" "<<draw<<" "<<p2<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

