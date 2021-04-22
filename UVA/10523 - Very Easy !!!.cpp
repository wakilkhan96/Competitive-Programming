#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))

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

string productString_and_Integer(string a, int b)
{
    reverse(a.begin(), a.end());
    int a_length = a.length();

    string ans = "";
    int product = 0, rest = 0;
    for(int x=0; x< a_length; x++)
    {
        product = ((a[x]-'0')*b) + rest;
        ans += (product%10) + '0';
        rest = product/10;
    }
    while(rest)
    {
        ans += (rest%10) + '0';
        rest = rest/10;
    }

    reverse(ans.begin(), ans.end());

    while(ans[0]=='0') ans.erase(ans.begin());
    if(ans.length()==0) ans += '0';

    return ans;

}



string calculate_A_pow_i(int A, int i)
{
    string result = "";
    result = productString_and_Integer("1", A);
    for(int x=1; x<i; x++) result = productString_and_Integer(result, A);
    return result;
}


int main()
{
    int n, A;

    while(cin>>n>>A)
    {
        //calculate_A_pow_i(n, A);
        if(A==0)
        {
            cout<<"0"<<'\n';
            continue;
        }

        string ans = "0", result = "";
        for(int i=1; i<=n; i++)
        {
            result = calculate_A_pow_i( A, i );
            result = productString_and_Integer(result, i);
            ans = addString(ans, result);
        }

        cout<<ans<<'\n';


    }
    return 0;
}

