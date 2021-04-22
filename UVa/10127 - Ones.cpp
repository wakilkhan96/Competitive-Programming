#include<bits/stdc++.h>
#define show printf
using namespace std;
long long z;
int MOD(int a,int b)
{
	int res = 1;
	a = a%z;
    while(b>0)
	{
		if(b&1) res = ((res%z)*(a%z))%z;
		a = ((a%z)*(a%z))%z;
		b = b/2;
	}

	return res;
}



int main()
{
    long long n, x, count = 0;
    while(cin>>n)
    {
        z = n;
        int sum = 0;
        for(x=0; ; x++)
        {
            sum = ( (sum%z) + MOD(10,x) )%z;
            if(sum%n==0)break;
        }
        cout<<x+1<<'\n';
    }
    return 0;
}



/*
sequence of 1's are...
1 - (1-digit) which is divisible by
11
111             - (3-digit) which is divisible by 3 (111/3=37)
1111
11111
111111          - (6-digit) which is divisible by 7
1111111
11111111
..........
111111111111    - (12-digit) which is divisible by 9901
..............

sequence of 1's, p = ∑[i=0 to x-1] 1*10^i
so we find out sum and check if now it is divisible by n;
but problem is 10^i may cause overflow, so we using 10^i mod n

without mod, sum = ( sum + 10^x );
             if(sum%n==0)break;
with mod,    sum = ( (sum%z) + MOD(10,x) )%z;
             if(sum%n==0)break;

            here, by MOD(10,x) we are calculating (10^x) %z;

*/
/*
another way of doing it....


int main()
{
	int n;
	while(scanf("%d", &n) == 1)
    {
		int i, tmp = 1;
		for(i = 1; ; i++)
		{
			if(tmp%n == 0)	break;
			tmp = tmp*10 + 1;
			tmp %= n;
		}
		printf("%d\n", i);
	}
    return 0;
}

*/
