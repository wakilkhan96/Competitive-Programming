#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0)

vector<string>v;
vector<int>v_int;

void backtrack_permutation(string str, int len, char permute[], int index, bool isValid[])
{
    if(index==len)
    {
        string temp = "";
        for(int i=0; i<len; i++) temp += permute[i];
        v.push_back(temp);
        v_int.push_back( stoi(temp) );
        return;
    }

    for(int x=0; x<len; x++)
    {
        if(isValid[x])
        {
            isValid[x] = false;
            permute[index] = str[x];
            backtrack_permutation(str, len, permute, index+1, isValid);
            isValid[x] = true;
        }
    }
    
}

void generate_permutation(string str)
{
    int len = str.size();
    char permute[50];
    int index = 0;
    bool isValid[50];
    memset(isValid, true, sizeof(isValid));
    v.clear();
    v_int.clear();
    backtrack_permutation(str, len, permute, index, isValid);
    //for(int x=0; x<v.size(); x++) cout<<v_int[x]<<endl;
}

string toString(int n)
{
    string str  = "";
    while(n)
    {
        int mod = n/10;
        mod = n - mod*10;
        n = n/10;
        string tmp = "";
        tmp += ('0'+mod);
        str = tmp + str;
    }

    return str;
}

bitset<1000100>bs;
vector<int>prime;

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

vector<int>AnagrammaticPrimes;
bool isAnagrammaticPrime()
{
    bool aPrime = true;
    for(int x=0; x<v_int.size(); x++)
    {
        if( !isPrime(v_int[x]) ) aPrime &= false;
    }

    if(aPrime) return true;
    return false;
}

void generate_AnagrammaticPrimes()
{
    for(int x=0; x<prime.size(); x++)
    {
        string str = toString(prime[x]);
        generate_permutation(str);
        if(isAnagrammaticPrime() ) AnagrammaticPrimes.push_back(prime[x]);
    }
}

int find_next_AnagrammaticPrime(int n)
{
    int low = 0, high = AnagrammaticPrimes.size()-1;

    while(low<high)
    {
        int mid = (low+high)/2;
        if(AnagrammaticPrimes[mid]<=n) low = mid+1;
        else high = mid;
    }

    return AnagrammaticPrimes[low];
}


int main()
{
    //freopen ("myfile.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cin.ignore();
    sieve(10000);
    generate_AnagrammaticPrimes();
    //for(int x=0; x<AnagrammaticPrimes.size(); x++) cout<<AnagrammaticPrimes[x]<<endl;

    
    while(true)
    {
        int n;
        cin>>n;
        if(n==0) break;
        else
        {
            int c_power = log(n)/log(10);
            //cout<<c_power<<endl;
            int next_power_of_10 = pow(10.0, c_power+1.0);
            //cout<<next_power_of_10<<endl;
            int z = find_next_AnagrammaticPrime(n);
            //printf("z = %d\n", z);
            if(z>=next_power_of_10) cout<<"0"<<'\n';
            else if(n>=AnagrammaticPrimes[AnagrammaticPrimes.size()-1]) cout<<"0"<<'\n';
            else cout<<z<<'\n';
        }
        
        
    }



}

/*
int anagramic[] = {2, 3, 5, 7, 11, 13, 17, 31, 37,
 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};


Sample Input
10
16
900
113
8000000
0
Sample Output
11
17
919
131
0

*/