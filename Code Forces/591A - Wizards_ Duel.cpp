
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	double l, v1, v2;
	cin>>l>>v1>>v2;
	cout<<(l*v1)/(v1+v2)<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


/*

S1 = V1*t
S2 = V2*t
l = S1 + S2

S1 = (l*V1)/(V1+V2)
*/
