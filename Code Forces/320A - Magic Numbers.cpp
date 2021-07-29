#include<bits/stdc++.h>
using namespace std;



void solve()
{
    string str;
	cin>>str;

	int len;
	len = str.size();

	bool flag = true;
	if(str[0]!='1') flag = false;
	for(int x=0; x<len; x++) if(!(str[x]=='4' || str[x]=='1')) flag = false;
	for(int x=2; x<len; x++)
	{
		if(str[x-2]=='4' && str[x-1]=='4' && str[x]=='4') flag = false;
	}

	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


