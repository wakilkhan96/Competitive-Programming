#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ruble;
	bool flag = true;
	map<int, int> mp;
	mp.clear();

	cin>>n;
	for(int x=0; x<n; x++)
	{
		cin>>ruble;
		mp[ruble]++;
		if(ruble != 25)
		{
			if( ruble == 50 )
			{
				if(mp[25] > 0) mp[25]--;
				else flag = false;
			}
			else if(ruble == 100)
			{
				if( mp[50]>0  && mp[25]>0 )
				{
					mp[50]--; mp[25]--;
				}
				else if( mp[25]>=3 )
				{
					mp[25]--; mp[25]--; mp[25]--;
				}
				else flag = false;

			}
		}
	} 
	
	if(flag == true) cout<<"YES\n";
	else cout<<"NO\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


