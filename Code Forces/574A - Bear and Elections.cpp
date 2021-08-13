
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, limak, votes, cnt(0);
	cin>>n; 
	cin>>limak;
	cnt = limak;

	priority_queue<int> pq;
	for(int i=1; i<n; i++)
	{
        cin>>votes;
        pq.push(votes);
    }

    while( pq.top() >= cnt ) 
	{
        int votes = pq.top();
        pq.pop();
        votes--;
        pq.push(votes);
        cnt++;
    }

	cout<<cnt-limak<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*
Problem-solving idea: from the example explanation, 
you only need to find the largest number each time, 
and then subtract one if you find it, and add one 
to the first number until the first number is the largest.
*/
