#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int test, n, cou;
	string str, _str;
	cin>>test;
	while (test--)
	{
		cin>>n;
		cin>>str;
		_str = str;
		sort(str.begin(), str.end());
		cou = 0;
		for(int i=0; i<n; i++)
		{
			if(str[i]!=_str[i]) cou++;
		}
		cout<<cou<<"\n";
	}

	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


