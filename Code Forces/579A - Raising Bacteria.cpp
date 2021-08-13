
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	int n, cnt = 0;
	cin>>n;
	while(n>0)
	{
		int pow_of_two = log2((double)n);
		//cout<<pow_of_two<<endl;
		n -= (int)pow(2.0, (double)pow_of_two);
		cnt++;
	}
	cout<<cnt<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

*/
