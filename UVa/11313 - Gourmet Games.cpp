#include<bits/stdc++.h>
using namespace std;

int val  = 0, rest = 0;
bool impossible = false;

void fun(int n, int m)
{
    int x = 0;
    rest = n;
    while(rest>=m)
    {
        x++;
        rest = rest-m+1;

    }

    if(rest==1) cout<<x<<'\n';
    else printf("cannot do this\n");
}


int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, m;
        cin>>n>>m;
        fun(n, m);

    }
    return 0;
}

