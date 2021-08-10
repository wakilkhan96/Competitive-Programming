#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, c, temp_max, maxi, ans = 0; 
    cin>>a>>b>>c;

    temp_max = max(a+b, a*b);
    maxi = max(temp_max+c, temp_max*c);
    ans = max(ans, maxi);
    swap(a, c);
    temp_max = max(a+b, a*b);
    maxi = max(temp_max+c, temp_max*c);
    ans = max(ans, maxi);

    cout<<ans<<"\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








