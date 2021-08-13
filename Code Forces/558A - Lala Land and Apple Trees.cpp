
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

bool cmp1(pair<int, int> p1, pair<int, int> p2)
{
	return p1.first>p2.first;
}
bool cmp2(pair<int, int> p1, pair<int, int> p2)
{
	return p1.first<p2.first;
}

void solve()
{
	int n, x, a, total(0);
	cin>>n;
	vector<pair<int, int> > group1, group2;
	for(int i=0; i<n; i++)
	{
		cin>>x>>a;
		if(x<0) group1.push_back({x, a});
		else group2.push_back({x, a});
		total += a;
	} 

	sort(group1.begin(), group1.end(), cmp1);
	sort(group2.begin(), group2.end(), cmp2);

	int size1 = group1.size(), size2 = group2.size(), diff;
	diff = abs(size1-size2);

	//cout<<total<<" "<<size1<<" "<<size2<<"\n"<<endl;
	if(size1>size2)
	{
		diff--;
		while(diff--)
		{
			int last_val = group1[size1-1].second;
			total -= last_val;
			group1.pop_back();
			size1--;
		} 
	}
	else if(size2>size1)
	{
		diff--;
		while(diff--)
		{
			int last_val = group2[size2-1].second;
			total -= last_val;
			group2.pop_back();
			size2--;
		} 
	}
	
	//cout<<total<<" "<<size1<<" "<<size2<<"\n"<<endl;
	//for(int i=0; i<size1; i++) cout<<group1[i].first<<" "<<group1[i].second<<endl;
	//for(int i=0; i<size2; i++) cout<<group2[i].first<<" "<<group2[i].second<<endl;
	cout<<total<<"\n";
    
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
4
-1 3
3 5
-2 1
1 3

*/