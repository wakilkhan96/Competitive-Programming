#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
    getline(cin, str);

	set <char> items;
	items.clear();

	int size = str.size();
	for(int i = 0; i<size; i++)
	{
		if(str[i]>='a' && str[i]<='z') items.insert(str[i]);
	}

	cout<<items.size()<<"\n";
	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








