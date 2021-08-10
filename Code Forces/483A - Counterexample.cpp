#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long l, r; cin >> l >> r;
    for(long long i = l; i <= r; ++i)
    {
        for(long long j = i + 1; j <= r; ++j)
        {
            for(long long k = j + 1; k <= r; ++k) 
            {
                if(__gcd(i, j)==1 && __gcd(j, k)==1 && __gcd(i, k)!=1) 
                {
                    cout << i << ' ' << j << ' ' << k ;
                    goto end;
                }
            }
        }
    }
    puts("-1");

    end:
    cout<< "\n";

}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}








/*
This problem has two possible solutions:

Let's handle all possible triples and check every of them for being a counterexample. This solution works with asymptotics O(n3logA)
Handle only a few cases. It could be done like this:

  if (l % 2 != 0)
      l++;
   
  if (l + 2 > r)
    out.println(-1);
  else
    out.println(l + " " + (l + 1) + " " + (l + 2));

*/