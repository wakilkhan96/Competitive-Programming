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
    //if(rest) ans += rest + '0'; ///only for tis problem, this line will be commented

    reverse(ans.begin(), ans.end());
    return ans;

}

int main()
{
    int test, n;
    char f, s;
    string a, b, temp;

    cin>>test;
    while(test--)
    {
        getline(cin, temp);
        cin>>n;
        a = "", b = "";
        for(int x=0; x<n; x++)
        {
            cin>>f>>s;
            a += f;
            b += s;
        }

        cout<<addString(a, b)<<'\n';
        if(test) printf("\n");
    }

    return 0;
}

