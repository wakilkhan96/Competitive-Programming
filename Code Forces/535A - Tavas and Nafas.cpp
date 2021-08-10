
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
    map<int, string> mp;
    string digit[10] = {"zero", "one", "two", "three", "four", 
        "five","six", "seven", "eight", "nine"};
    string nums[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string ty[10] = {"", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"};

    int size, n;
    cin>>n;

    if (n < 10) cout << digit[n]<<"\n";
    else if (n >= 10 && n < 20) cout<<nums[n-10]<<"\n";
    else if (n%10 == 0)cout<<ty[n/10]<<"\n";
    else cout<<ty[n/10]<<"-"<<digit[n % 10]<<"\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


