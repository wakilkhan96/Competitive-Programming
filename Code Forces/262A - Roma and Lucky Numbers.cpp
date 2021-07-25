#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, cou = 0;
	string str;
	cin>>n>>k;
	for(int x=0; x<n; x++)
	{
		cin>>str;
		bool flag = true;
		int len = str.size();
		int lucky_count = 0;
		for(int y=0; y<len; y++)
		{
			if(str[y]=='4' || str[y]=='7') lucky_count++;
			if(lucky_count>k) flag = false;
		}

		if(flag) cou++;
	}
	cout<<cou<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}