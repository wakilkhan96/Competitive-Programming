#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, +1, 0, 0}; //TBRL
int dy[4] = {0, 0, +1, -1};

bool isValid(int x, int y, int n)
{
	bool flag = true;
	if(!(x>=0 && x<3)) return false;
	if(!(y>=0 && y<3)) return false;
	return true;
}
void solve()
{
    int mat[3][3], temp;
	memset(mat, 0, sizeof(mat));

	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			cin>>temp;
			mat[x][y] += temp;
			for(int z=0; z<4; z++)
			{
				int _x = x + dx[z];
				int _y = y + dy[z];

				if(isValid(_x, _y, 3)) mat[_x][_y] += temp;
			}
		}
	}

	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			//cout<<mat[x][y];
			if(mat[x][y]%2==0) cout<<"1";
			else cout<<"0";
		}
		cout<<"\n";
	}
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


