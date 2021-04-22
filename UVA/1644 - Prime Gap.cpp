#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0)


bitset<1300100>bs;
vector<int>prime;

void sieve(long long bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    int sqrt_of_bound = sqrt(bound);
    for(long long x=2; x<=bound; x++)
    {
        if(bs[x])
        {
            for(long long y=x*x; y<=bound; y+=x) bs[y] = 0;
            prime.push_back( int(x) );
        }
    }

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



int main()
{
    //freopen ("myfile.txt","w",stdout);
    fast_io;
    //cin.ignore();
    sieve(1300000);
    int low = 0, high = prime.size()-1;
    
    //for(int x=0; x<prime.size(); x++) cout<<prime[x]<<'\n';
    //cout<<prime.size()<<endl;
    int test, n;
    while(true)
    {
        cin>>n;
        if(n==0) break;

        int index = find_lower_bound(prime, low, high, n);

        //cout<<index<<"->"<<prime[index]<<endl;
        //for(int x=lindex; x<=hindex; x++ ) cout<<prime[x]<<">\n";
        int lh_range = 0, rh_range = 0; //lh = left hand
        rh_range = index;
        if(prime[index]==n) lh_range = index;
        else lh_range = index-1;

        cout<<prime[rh_range]-prime[lh_range]<<'\n';


    }

}



/*
Sample Input
10
11
27
2
492170
0
Sample Output
4
0
6
0
114

*/
