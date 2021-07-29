#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r, c;
	char ch;
	map<int, int> row_with_evil, col_with_evil;
	cin>>r>>c;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>ch;
			if(ch=='S')
			{
				row_with_evil[i]++;
				col_with_evil[j]++;
			}
		}
	}
	int rr = row_with_evil.size(), cc = col_with_evil.size();
	cout<<(r*c)-(rr*cc)<<"\n";
	

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*
find for how many rows we cant go from left to right = rr
find for how many columns we cant go from top to bottom = cc

so, in total we cant eat (rrXcc) places
*/