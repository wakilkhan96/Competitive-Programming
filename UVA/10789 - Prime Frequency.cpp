#include<bits/stdc++.h>
using namespace std;

bitset<3000>bs;
vector<int>prime;

bool compare( pair<char, int>a , pair<char, int>b)
{
    return a.first < b.first;
}

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(int x=2; x<=bound; x++)
    {
        if(bs[x])
        {
            for(int y=x*x; y<=bound; y+=x) bs[y] = 0;
            prime.push_back( x );
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

int main()
{
    sieve(2010);

    int test, cou = 1;
    scanf("%d", &test);

    while( test--)
    {
        string str;
        cin>>str;
        int length = str.length();

        map<char, int>mp;
        for(int x=0; x<length; x++) mp[str[x]]++;
        vector< pair<char ,int> >mpCopy(mp.begin(), mp.end());
        sort(mpCopy.begin(), mpCopy.end(), compare);


        int size = mpCopy.size();
        int count = 0;

        printf("Case %d: ", cou++);
        for(int x=0; x<size; x++)
        {
            if( isPrime( mpCopy[x].second ) )
            {
                count++;
                cout<<mpCopy[x].first;
            }
        }
        if(count==0)printf("empty");
        printf("\n");


    }

    return 0;
}
