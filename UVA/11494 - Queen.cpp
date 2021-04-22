#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x1,x2,y1,y2,moves;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(!(x1+y1+x2+y2))break;
        moves=0;
        if(x1-x2==0 && y1-y2==0)moves=0;
        else if(x1==x2 || y1==y2)moves=1;
        else if(abs(x1-x2)==abs(y1-y2))moves=1; /// for diagonal movements absolute differences
        else moves=2;                           /// of both x and both y between two points remain same

        cout<<moves<<endl;
    }
    return 0;
}
