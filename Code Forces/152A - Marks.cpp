#include<bits/stdc++.h>
using namespace std;

bool arr[10005];

void solve()
{
    int test, n, m, highestMark[105], student[105];
	vector<string>_marks(105);

	memset(highestMark, 0, sizeof(highestMark));
	memset(student, 0, sizeof(student));
	string marks;
	cin>>n>>m;
	

	for(int x=0; x<n; x++)
	{
		cin>>_marks[x];
		marks = _marks[x];
		for(int y=0; y<m; y++)
		{
			int mark = marks[y]-'0';
			highestMark[y] = max(highestMark[y], mark);
		} 
	}

	for(int x=0; x<n; x++)
	{
		marks = _marks[x];
		for(int y=0; y<m; y++)
		{
			int mark = marks[y]-'0';
			if(mark>=highestMark[y]) student[x]++;
		}
		
	}

	int cou = 0;
	for(int x=0; x<n; x++) if(student[x]) cou++;
	cout<<cou<<"\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}