#include <bits/stdc++.h>
using namespace std;
/*
int fun (int team1, int team2)
{
  if (team1 == 0 || team2 == 0)
    return 0;
  int res = (team1 + team2) / 2 + fun (team1 / 2, team2 / 2);
  return res;
}
*/

int main ()
{
    ios_base::sync_with_stdio (0);
    cin.tie (0);
    cout.tie (0);
    
    int n, m;
    cin >> n >> m;
    int t = (n*(n+1))/2;
    m = m%t;
    
    if(m>0)
    {
      for(int x=1; m>=x; x++) m -= x;
    }
    cout<<m<<"\n";
    return 0;
}
