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

  int n;
  cin >> n;
  cout << 3*((n + 1)/2) << "\n";

  return 0;
}
