#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
	cin>>k;
	string str;
	cin>>str;
	int flen = str.size();
	int slen = flen/k;
	int nparts = k;
	map<char, int> mp;

	for(int x=0; x<flen; x++) mp[str[x]]++;
	bool flag = true;
	
	//if(str[0]=='x') cout<<flen<<" "<<slen<<"\n";
	for(auto it=mp.begin(); it!=mp.end(); it++)
	{
		//cout<<it->second%(len/n)<<endl;
		if(it->second%nparts!=0 ) flag = false;
		//if(str[0]=='x') cout<<it->first<<"->"<<it->second<<'\n';
	}
	if(flag)
	{
		
		str = "";
		for(auto it=mp.begin(); it!=mp.end(); it++)
		{
			int times = it->second/nparts;
			for(int x=0; x<times; x++) str += it->first;
		}
		for(int x=0; x<nparts; x++) cout<<str;
		cout<<"\n";
	}
	else cout<<"-1\n";

	return;

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}