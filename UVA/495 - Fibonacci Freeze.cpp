#include<bits/stdc++.h>
using namespace std;

vector<string> fib;

string addString(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int a_length = a.length();
    int b_length = b.length();
    int diff = abs(a_length-b_length);
    if(a_length<b_length)
    {
        while(diff--)
            a += "0";
    }
    else if(b_length<a_length)
    {
        while(diff--)
            b += "0";
    }
    //cout<<a<<" "<<b<<endl;

    string ans = "";
    int sum = 0, rest = 0;
    for(int x=0; x<max(a_length, b_length); x++)
    {
        sum = (a[x]-'0') + (b[x]-'0') + rest;
        ans += (sum%10) + '0';
        rest = sum/10;
    }
    if(rest) ans += rest + '0';

    reverse(ans.begin(), ans.end());
    return ans;

}

void fibonacci()
{
    fib.push_back("0");
    fib.push_back("1");
    string next;
    for(int x=2; x<=5000; x++)
    {
        next = addString(fib[x-1], fib[x-2]);
        fib.push_back(next);
    }

}

int main()
{
    long long int n,x,y,z,sum;
    fibonacci();
    while(scanf("%lld",&n)==1 && n>-1)
    {
        printf("The Fibonacci number for %d is ", n);
        cout<<fib[n]<<'\n';
    }
    return 0;
}
