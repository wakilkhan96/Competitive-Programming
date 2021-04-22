#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0)


bitset<1000100>bs;
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
    sieve(1000000);
    int low = 0, high = prime.size()-1;
    
    //for(int x=0; x<prime.size(); x++) cout<<prime[x]<<'\n';
    //cout<<prime.size()<<endl;
    int n, n1, n2, lindex, hindex;
    cin>>n;
    while(n--)
    {
        cin>>n1>>n2;
        lindex = hindex = 0;
        lindex = find_lower_bound(prime, low, high, n1);
        hindex = find_lower_bound(prime, low, high, n2);
        if(prime[hindex]>n2) hindex--;

        //cout<<prime[lindex]<<"-"<<prime[hindex]<<endl;
        //for(int x=lindex; x<=hindex; x++ ) cout<<prime[x]<<">\n";
        map<int, int> mp;
        mp.clear();
        int frequent_diff = 0, frequency = 0;
        int count = 0;
        int flag = true;
        for(int x=lindex+1; x<=hindex; x++ )
        {
            int diff = abs(prime[x]- prime[x-1]);
            mp[diff]++;
            
            if(mp[diff]==frequency) flag = false;
            else if(mp[diff]>frequency)
            {
                frequent_diff = diff;
                frequency = mp[diff]; 
                flag = true;
            }
            
            count++;
            
        }

        if(count<1) printf("No jumping champion\n");
        else 
        {
            if(!flag) printf("No jumping champion\n");
            else printf("The jumping champion is %d\n", frequent_diff);
        }

        //cout<<count<<endl;
        //cout<<mp.size()<<endl;

    }

}



/*
Sample Input
3
2 11
2 5
30 50

Sample Output
The jumping champion is 2
No jumping champion
The jumping champion is 4

*/
