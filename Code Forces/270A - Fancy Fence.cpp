#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int test, theta;
	cin>>test;

	while(test--)
	{
		cin>>theta;
		(360%(180-theta)==0 )? cout<< "YES\n" : cout<< "NO\n";
	}
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}


/*
Each Angle of polygons = (n−2) × 180° / n;
so, n = 360 / (180° - Each Angle of polygons), n must be natural number
so, 360 must be divisible by (180° - Each Angle of polygons)
https://www.mathsisfun.com/geometry/interior-angles-polygons.html
*/