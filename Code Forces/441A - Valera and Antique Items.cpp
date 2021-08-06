#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
    int n, v, k, s;
	cin>>n>>v;

	vector<int> vec;
	int size = 0;
	for(int i=0; i<n; i++)
	{
		cin>>k; 
		for(int x=0; x<k; x++)
		{
			cin>>s;
			if(v>s)
			{
				if(size>0){
					if(vec[size-1]==i+1) continue;
				}
				vec.push_back(i+1);
				size++;
			} 

		} 
	} 

	cout<<size<<"\n";
	for(int i=0; i<size; i++) cout<< vec[i]<< " ";
	if(size) cout<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








