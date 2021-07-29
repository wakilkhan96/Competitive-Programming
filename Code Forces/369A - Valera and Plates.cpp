#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k, cou = 0, x;
	cin>>n>>m>>k;
	for(int i=0; i<n; i++)
	{
		cin>>x; 
		if(x==1)
		{
			if(m>0) m--;
			else cou++;
		}
		else if(x==2)
		{
			if(k>0) k--;
			else if(m>0) m--;
			else cou++;
		}
	} 
	cout<<cou<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

