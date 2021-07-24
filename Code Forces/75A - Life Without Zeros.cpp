#include <bits/stdc++.h>
using namespace std;

int without_zero(int n)
{
    int i, rem = 0;
    string s = "";
    while(n!=0)
    {
        rem = n%10;
        n /= 10;
        //cout<<rem<<endl;
        if(rem) s = to_string(rem) + s;
    }
    
    //cout<<s<<endl<<endl;
    istringstream to_int(s);

    to_int >> i;
    
    return i;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c;
    cin>>a>>b;
    
    c = a+b;
    

    int a_without_zero, b_without_zero, c_without_zero;
    a_without_zero = without_zero(a);
    b_without_zero = without_zero(b);
    c_without_zero = without_zero(c);
    
    //cout<<a_without_zero<<endl;
    //cout<<b_without_zero<<endl;
    //cout<<c_without_zero<<endl;
    
    if(a_without_zero+b_without_zero == c_without_zero)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
// sync_with
    return 0;
}
