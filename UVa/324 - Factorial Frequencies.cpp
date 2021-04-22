#include <bits/stdc++.h>
using namespace std;

struct intArray
{
	int frequency[10];
};
int main() 
{
	//freopen("myfile.txt", "w", stdout);
	int digits[1000];
	memset(digits, -1, sizeof(digits));
	intArray arr[500];
 	digits[0] = 1;

	int res, rem, carry, fDigits = 0;
	for(int x=1; x<500; x++)
	{
		res = 0, rem = 0, carry =  0;
		for(int y=0; y<1000; y++)
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
		//for (int i=20; i>=0 && x<50; i--) if(digits[i]>-1)printf("%d", digits[i]);
		//cout<<endl;
		for (int i=0; i<fDigits; i++) arr[x].frequency[digits[i]] = 0;
		for (int i=0; i<fDigits; i++)
		{
			arr[x].frequency[digits[i]]++;
		} 
		
	}	 


	int n;
	while (scanf("%d", &n) && n) 
	{
		printf("%d! --\n   ",n);
        for(int i=0;i<5;i++) 
		{
            if(i) printf("    ");
            printf("(%d)%5d", i, arr[n].frequency[i]);
        }
        printf("\n   ");
        for(int i=5;i<10;i++) 
		{
            if(i>5) printf("    ");
            printf("(%d)%5d", i, arr[n].frequency[i]);
        }
        printf("\n");
	}

	return 0;
}


/*
Solving Technique:
as 1! = 1 so, digits[0] = 1;
then multiply all the digits with the numbers (1 to 1000), as biggest possible n is 1000
after multiplying with an individual number=Y with digits results the Y! //in reverse //
then just count digit contained inside digits[]


Sample Input
3
8
100
0
Sample Output
3! --
	(0) 0 (1) 0 (2) 0 (3) 0 (4) 0
	(5) 0 (6) 1 (7) 0 (8) 0 (9) 0
8! --
	(0) 2 (1) 0 (2) 1 (3) 1 (4) 1
	(5) 0 (6) 0 (7) 0 (8) 0 (9) 0
100! --
	(0) 30 (1) 15 (2) 19 (3) 10 (4) 10
	(5) 14 (6) 19 (7) 7 (8) 14 (9) 20
*/