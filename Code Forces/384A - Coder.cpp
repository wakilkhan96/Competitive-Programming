#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cards[1005];
	cin>>n;
	if(n%2==1) cout<<(n*n+1)/2<<"\n";
	else cout<<(n*n)/2<<"\n";
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i&1)
			{
				if(j&1) cout<<"C";
				else cout<<".";
			}
			else
			{
				if(!(j&1)) cout<<"C";
				else cout<<".";
			}
		}
		cout<<"\n";
	}
	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
So let’s see how it looks for N = 1, 2, 3, 4 and 5. With C I noted the coder and with * I noted an empty cell.

1		2		3		4
1		2		5		8
C		C.		C.C		C.C.
		.C		.C.		.C.C
				C.C		C.C.
						.C.C


5			6
13			18
C.C.C		C.C.C.
.C.C.		.C.C.C
C.C.C		C.C.C.
.C.C.		.C.C.C
C.C.C		C.C.C.
			.C.C.C




By now you should note that answer is N ^ 2 / 2 when N is even and (N ^ 2 + 1) / 2 when N is odd. Good. Generally, after you find a possible solution by taking examples, you need to prove it, then you can code it.

In order to proof it, one needs to do following steps:

1/ prove you can always build a solution having N ^ 2 / 2 (or (N ^ 2 + 1) / 2) pieces.

2/ prove that N ^ 2 / 2 (or (N ^ 2 + 1) / 2) is maximal number – no other bigger solution can be obtained.

For proof 1/ imagine you do coloring like in a chess table.

 

The key observation is that by placing all coders on black squares of table, no two coders will attack. Why? Because a piece placed at a black square can attack only a piece placed at a white square. Again, why? Suppose chess table is 1-based. Then, a square (i, j) is black if and only if i + j is even. A piece placed at (i, j) can attack (i + 1, j), (i – 1, j) (i, j + 1) or (i, j – 1). The sum of those cells is i + j + 1 or i + j – 1. But since i + j is even, i + j + 1 and i + j – 1 are odd, hence white cells.

Depending on parity of N, number of black cells is either N ^ 2 / 2 or (N ^ 2 + 1) / 2. For N even, one can observe that there are equal amount of black and white cells. Total number of cells is N ^ 2, so number of black cells is N ^ 2 / 2. For N odd, number of black cells is number of white cells + 1. We can imaginary add a white cell to the board. Now, number of black cells will be also equal to number of white cells, so answer is (N ^ 2 + 1) / 2.

2/ Two coders attack each other if they are placed at two adjacent cells, one black and other one white. One needs to prove that adding more than number from 1/ will cause this to happen. If you place a coder at a white cell, you won’t be able to place at least one coder at a black cell, so in best case you don’t win anything by doing this. Hence, it’s optimally to place all coders on same color cells. Since cells colored in black are always more or equal to white ones, it’s always optimally to choose black color. But number from 1/ is the number of cells having black color. Adding one more piece will force you to add it to a white color cell. Now, you’ll have a piece placed at a black colored cell and one placed at an adjacent white colored cell, so two coders will attack. Hence, we can’t place more than number from 1/ pieces.
*/