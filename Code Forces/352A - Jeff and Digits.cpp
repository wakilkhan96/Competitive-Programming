#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, y, cnt0(0), cnt5(0);
	cin>>n;
	for(int x=0; x<n; x++)
	{
		cin>>y; 
		cnt0 += y==0;
		cnt5 += y==5;
	} 
	//cout<<cnt0<<" "<<cnt5<<endl;

	cnt5 -= (cnt5%9);
	if(cnt5<0) cnt5 = 0;

	//cout<<cnt0<<" "<<cnt5<<endl;
	
	if(cnt5 && cnt0)
	{
		while(cnt5--) cout<<"5";
		while(cnt0--) cout<<"0";
	}
	else if(cnt0) cout<<"0";
	else cout<<"-1";
	cout<<"\n";
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
Hint 1
90=9×10. So a number will be divisible by 90 if and only if it's divisible by 9 and 10.

Hint 2
A number will be divisible by 10 if it has a trailing 0. 
A number will be divisible by 9, if the sum of it's digits are divisible by 9.

Hint 3
After taking input, count the number of 5's (we denote it by cnt5). 
The number of 0's will be then cnt0=n−cnt5.

Hint 4
Remember we need the number to be divisible by both 9 and 10. So if (cnt5 == n) or (cnt0 == 0), 
then there is no solution. Print −1.

Hint 5
At this point we know, there is at least one 0. So we can construct a number that is divisible by 10. 
The other condition was that the number has to divisible by 9. 
Although the 0's sum up to 0 and 0 is divisible by 9, we can't place leading 0's. 
So in order to satisfy the divisibility by 9 constraint, we have to place a number of 5's to the left of 0(or 0's)
such that the number of 5's sum up to a number that's divisible by 9.

Hint 6
How many 5's are needed to make the sum of 5's divisible by 9? Notice that lcm(5,9)=45. 
So we need at least 9 5's to make the sum of digits divisible by 9. 
In other words, let cnt5 be the number of 5's that sum up to a number that's divisible by 9. 
Then cnt5 has to be a multiple of 9. 
9 of 5's = 45, divisible by 9
18 of 5's = 90, divisible by 9
27 of 5's = 135, divisible by 9
36 of 5's = 180, divisible by 9
40 of 5's = 200, which is not divisible by 9
So, number of fives has to be divisible by 9, or multiple of 9.
Then, 
	cnt5 -= (cnt5%9); //we are modifying cnt5, so that it turns out to be multiple of 9
	if(cnt5<0) cnt5 = 0;
Think about as to why it's true.

Hint 7
We place cnt5 number of 5's at the start, then we place the remaining cnt0 number of 0's.
*/

