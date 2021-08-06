#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
    	int a[4], cnt = 0;
	for(int i=0; i<4; i++) cin>>a[i]; 
	cin>>str; 
	int len = str.size();
	for(int i=0; i<len; i++)
	{
		int y = (str[i]-'0')-1;
		cnt += a[y];
	}

	cout<<cnt<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

