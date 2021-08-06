#include<bits/stdc++.h>
using namespace std;
int dx[4] ={1, -1, 0, 0};
int dy[4] ={0, 0, 1, -1};

bool isValid(int x, int y, int n)
{
    if( (x>=0 && x<n) && (y>=0 && y<n) ) return true;
    return false;
}

void solve()
{
    char arr[105][105];
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++) cin>> arr[i][j];
    }
    bool ok = true;
    for (int i=0; i<n && ok; i++)
    {
        int cnt = 0;
        for (int j=0; j<n && ok; j++) 
        {
            //if(arr[i][j]=='o') continue;
            for(int k=0; k<4; k++)
            {
                int nx = i+dx[k];
                int ny = j+dy[k];
                if(isValid(nx, ny, n))
                {
                    if(arr[nx][ny]=='o') cnt++;
                }
            }

            if(cnt&1) ok = false;
        }
    }
	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








