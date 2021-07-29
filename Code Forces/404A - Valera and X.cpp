#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c, x[110];
	cin>>n;
	map<char, int> mp;
	char x_char, other_char;
	char arr[300][300];
	bool flag = true;
	for(int a=0; a<n; a++)
	{
		for(int b=0; b<n; b++) 
			cin>> arr[a][b], mp[arr[a][b]]++;
	}
	x_char = arr[0][0];
	other_char = arr[0][1];
	for(int a=0, i=0, j=n-1; i<n; i++, j--, a++)
	{
		if(arr[a][i] != x_char) flag = false; 
		if(arr[a][i] != arr[a][j]) flag = false; 

		for(int b=0; b<n; b++)
		{
			if(b==i || b==j) continue; 
			if(arr[a][b] != other_char) flag = false; 
		}
	}

	if(mp.size()!=2) flag = false;
	cout<< (flag==1? "YES\n":"NO\n");
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

