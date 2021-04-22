#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0)

#define maxN 46500

bitset<100100>bs;
vector<int>prime;
int prime_size;


void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(int x=2; x<=bound; x++)
    {
        if(bs[x] && (long long)x*x <= bound)
        {
            for(int y=x*x; y<=bound; y+=x) bs[y] = 0;
        }
        if(bs[x]) prime.push_back( x );
    }

    prime_size = prime.size();
}

bool isPrime(int n)
{
    bool found = false;
    int low = 0, mid = 0, high = prime.size()-1;

    while(low<=high)
    {
        mid = (low + high)/2;
        if(prime[mid]==n)
        {
            found = true;
            break;
        }
        else if(n<prime[mid]) high = mid-1;
        else low = mid+1;
    }

    if(found) return true;
    else return false;
}

bool isPrimeNumber(int n)
{
    if(n<=maxN) return bs[n];
    else
    {
        for(int x=0, nSqrt=(int)sqrt(n); x<prime_size && prime[x]<=nSqrt; x++)
        {
            if(n%prime[x]==0) 
            {
                //cout<<n<<" - divides by prime " <<prime[x]<<endl;
                return false;
            }
        }
        return true;
    }
}

int find_lower_bound(vector<int> v, int l, int h, int n)
{
    int low = l, high = h, mid = 0; 
    while(low<high)
    {
        mid = (low+high)/2;
        if(v[mid]<n) low = mid+1;
        else high = mid;
    }

    return low;
}


long long get_next_prime(long long ll, long long range)
{
    for(long long x=ll+1; x<=range; x++)
    {
        if(isPrimeNumber(x)) return (int)x;
    }
    return -1;
}

int main()
{
    //freopen ("myfile.txt","w",stdout);
    fast_io;
    //cin.ignore();
    sieve(46500);
    //cout<<"done"<<endl;
    
    long long L, R;
    while (scanf("%lld %lld", &L, &R)!=EOF) 
    {
        int max_diff = 0, min_diff = INT_MAX;
        int max_v1 = 0, max_v2 = 0, min_v1 = 0, min_v2 = 0;

            
        int last_prime = get_next_prime(L-1, R);
        //cout<<"last - "<<last_prime<<endl;
        int next_prime = 0;
        if(last_prime != -1)
        {
            while(true)
            {
                next_prime = get_next_prime(last_prime, R);
                if (next_prime == -1) break;
                int diff = next_prime-last_prime;
                if(max_diff<diff)
                {
                    max_diff = diff;
                    max_v1 = last_prime, max_v2 = next_prime;
                }
                if(min_diff>diff)
                {
                    min_diff = diff;
                    min_v1 = last_prime, min_v2 = next_prime;
                }

                last_prime = next_prime;

                //cout<<"last_prime-"<<last_prime<<endl;
            
            }
        }

        if (max_diff==0) puts("There are no adjacent primes.");
        else printf("%d,%d are closest, %d,%d are most distant.\n", min_v1, min_v2, max_v1, max_v2);
    }
   
    

}



/*
Sample Input
2 17
14 17
Sample Output
2,3 are closest, 7,11 are most distant.
There are no adjacent primes.

*/
