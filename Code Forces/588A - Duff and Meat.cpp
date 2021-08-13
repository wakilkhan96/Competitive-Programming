
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, a, p, cost(0), preserved(0);
	vector<pair<int, int> > v;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a>>p;
		v.push_back({a, p});
	} 

	preserved = 0, cost = 0;
	for(int i=0; i<n; i++)
	{
		if(preserved<v[i].first)
		{
			int todays_amount = v[i].first, todays_price = v[i].second;
			int j = i;
			while(true)
			{
				j++;
				if(j>=n) break;
				if(todays_price<v[j].second) todays_amount += v[j].first;
				else break;
			}

			cost += (todays_amount*todays_price);
			preserved += todays_amount;

			//cout<<preserved<<"-"<<cost<<endl;
		}

		preserved -= v[i].first;
	}
	cout<<cost<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

*/
