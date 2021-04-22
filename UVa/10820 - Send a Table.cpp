#include <bits/stdc++.h>
using namespace std;

bitset<1000100> bs;
vector<int> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);

    for(int x=4; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x);
    }
}

//euler totient function
int phi(int n)
{
    if(n==1) return 0;
    
    int ans = n;
    for(int i=0; i<prime.size() && prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            ans -= ans/prime[i];
        }
    }
 
    if(n>1)
    {
        ans -= ans/n;
    }
    return ans;
}

vector<int> table;
void precal()
{
    table.assign(50002, 0);
    table[1] = 1;
    for(int x=2; x<=50000; x++)
    {
        table[x] = table[x-1] + 2*phi(x);
    }

}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(1000000);
    //cout<<"done"<<endl;
    precal();
    //cout<<"done"<<endl;
    int n, test;

    while(cin>>n)
    {
        if(n==0) break;
        printf("%d\n", table[n]);
    }
    //printf("\n");

    return 0;
    
}




/*

Sample Input
2
5
0
Sample Output
3
19

strategy:
find out co-primes by euler totient function

Tutorial for Euler Totient (Phi) Function
Lets understand this problem by taking various examples :
Use paper and pen for better understanding !
N = 1 :
Clearly answer[1] is 1 because (1, 1) is always required !
N = 2 :
(1*1) , (1*2), (2*1) So answer[2] = 3
Similarly find answer for N = 3!
answer[3] = 7
Now lets see how can we find answer when N = 4:

-------------------------------------   ----------------
|   1, 1    |   1, 2	|   1, 3    |          1, 4    |
-------------------------------------   ----------------
|   2, 1    |	2, 2    |	2, 3	|          2, 4    |
-------------------------------------   ----------------
|   3, 1	|   3, 2	|   3, 3	|          3, 4    |
-------------------------------------   ----------------

|   4, 1	|   4, 2    |	4, 3    | 	     4, 4      |
--------------------------------------------------------
The number of red coloured boxes which are not Crossed gives the value of answer[3] that is 7. So while calculating answer[4] we need not to calculate answer[3] again because we already pre calculate answer[3]. So answer[4] must contain answer[3].
We need to find how many more elements are there which must be added in answer[4].
See the last line of the above matrix is :
X = 4 for all columns
Y[i] = {1, 2, 3, 4}
We can see here that 1, 3 are relatively prime to 4 while 2 and 4 are not.
So we need to cross 4,2 and 4,4 because they can be derived from 2,1 and 2,2 resp.
Similarly in vertical white column 2,4 and 4,4 should be crossed.
So we need to add :
answer[4] += 2 * (number of relatively prime numbers to 4)
We can find that easily using Euler Totient function.
So answer[N] = answer[N-1] + 2 * phi(N)

https://pritishthakkar.in/2017/07/05/uva-10820-send-a-table/
*/