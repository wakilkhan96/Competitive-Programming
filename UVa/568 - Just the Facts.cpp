#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int digits[300001] = { 0 }, nonzero[10001] = { 0 };
	memset(digits, -1, sizeof(digits));
 	digits[0] = 1;

	int res, rem, carry, fDigits = 0;
	for(int x=1; x<10001; x++)
	{
		res = 0, rem = 0, carry =  0;
		for(int y=0; y<30000; y++)
		{
			if(digits[y] == -1)
			{
				fDigits = y;
				if(rem>0) digits[y] = 0;
				else break;
			}
			res = digits[y]*x + rem;
			rem = res%10;
			digits[y] = rem;
			rem = res/10;

		}
		// for (int i=20; i>=0; i--) printf("%d", digits[i]);
		// cout<<endl;
		for (int i=0; i<fDigits; i++) 
		{
			if(digits[i]>0)
			{
				nonzero[x] = digits[i];
				break;
			}
		}
	}	 


	int n;
	while (scanf("%d", &n) == 1) 
	{
		printf("%5d -> %d\n", n, nonzero[n]);
	}

	return 0;
}


/*
Solving Technique:
as 1! = 1 so, digits[0] = 1;
then multiply all the digits with the numbers (1 to 1000), as biggest possible n is 1000
after multiplying with an individual number=Y with digits results the Y! //in reverse //
then just find the last nonzero digit contained inside digits[]


Sample Input
1
2
26
125
3125
9999
Sample Output
1 -> 1
2 -> 2
26 -> 4
125 -> 8
3125 -> 2
9999 -> 8
*/