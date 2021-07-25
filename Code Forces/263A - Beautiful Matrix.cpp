#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
	int mat[5][5];
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==1)
			{
				x = i;
				y = j;
			}
		}

	}
	//cout<<x<<y;
	cout<<abs(2-x)+abs(2-y)<<"\n";


}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}