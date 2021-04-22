#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0)

int maxN;

bitset<200100>bs;
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


int toInt(string str)
{
    if(str=="0") return 0;
    int len = str.size();
    int number = 0;
    for(int x=0; x<len; x++)
    {
        number = number*10 + str[x]-'0';
    }

    return number;
}


int main()
{
    //freopen("myfile.txt","w", stdout);
    maxN = 200000;
    sieve(maxN);
    string str, temp;
    int temp_int;

    while(true)
    {
        cin>>str;
        if(str=="0") break;

        vector<int> sub_strings;
        int len = str.size();
        for(int substr_len=1; substr_len<=min(6,len); substr_len++)
        {
            for(int x=0; x<=abs(len-substr_len); x++)
            {
                temp = str.substr (x, substr_len);
                temp_int = toInt(temp);
                if(isPrimeNumber(temp_int) && temp_int<=100000)
                     sub_strings.push_back(temp_int);
                //cout<<temp<<endl;
            }
        }

        sort(sub_strings.begin(), sub_strings.end());

        cout<<sub_strings[sub_strings.size()-1]<<'\n';
    }

    return 0;
}




/*

Sample Input
11245
91321150448
1226406
0
Sample Output
11
1321
2


*/