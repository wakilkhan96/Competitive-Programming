#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, gcd;
	cin>>n;
	
	cin>>gcd;
	for(int i=1; i<n; i++)
	{
		cin>>x;
		gcd = __gcd(gcd, x);
	}

	cout<<n*gcd<<"\n";
	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
First we know that: in the optimal solution, all number will be equal: otherwise we can pick a and b (a < b) then do b = b — a, it will make the answer better.

Then we need an observation: after each operation, the GCD (Greatest common divisor) of all number will remain same. It can be proved by this lemma: if g is a divisor of all number of x[], then after the operation, g is still the divisor of these numbers, and vice versa.

So in the end, all number will become the GCD of x[].

Another solution that can pass is: While there exist x[i] > x[j], then do x[i] -= x[j]. We can select arbitrary i and j if there exist more than 1 choice.
*/