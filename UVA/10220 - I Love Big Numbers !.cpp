#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int digits[3001] = { 0 }, sum[1001] = { 0 };
 	digits[0] = 1;

	int res, rem, carry;
	for(int x=1; x<1001; x++)
	{
		res = 0, rem = 0, carry =  0;
		for(int y=0; y<3000; y++)
		{
			res = digits[y]*x + rem;
			rem = res%10;
			digits[y] = rem;
			rem = res/10;

		} 
		// for (int i=20; i>=0; i--) printf("%d", digits[i]);
		// cout<<endl;
		for (int i=0; i<3000; i++) sum[x] += digits[i];
	}	 


	int n;
	while (scanf("%d", &n) == 1) 
	{
		printf("%d\n", sum[n]);
	}

	return 0;
}


/*
Solving Technique:
as 1! = 1 so, digits[0] = 1;
then multiply all the digits with the numbers (1 to 1000), as biggest possible n is 1000
after multiplying with an individual number=Y with digits results the Y! //in reverse //
then just sum up the digits contained inside


Sample Input
5
60
100
Sample Output
3
288
648

*/