
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, m, v, max_vote = 0;
	cin>>n>>m;
	vector<int> candidate_vote(110, 0);

	for(int j=0; j<m; j++)
	{
		int winner_v = -1, winner_index = -1;
		for(int i=0; i<n; i++)
		{
			cin>>v;
			if(v>winner_v)
			{
				winner_v = v;
				winner_index = i;
			}
		}
		candidate_vote[winner_index]++;
		max_vote = max(max_vote, candidate_vote[winner_index]);
	}

	for(int i=0; i<n; i++)
	{
		if(candidate_vote[i]==max_vote)
		{
			cout<<i+1<<"\n";
			break;
		}
	}

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

