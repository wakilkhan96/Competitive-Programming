#include<bits/stdc++.h>
using namespace std;

void solve()
{
    double s1, s2, s3, a, b, c;
	cin>>s1 >> s2 >> s3;

	a = sqrt((s1*s3)/s2);
	b = sqrt((s1*s2)/s3);
	c = sqrt((s3*s2)/s1);

	cout<<4*(a+b+c)<<"\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}