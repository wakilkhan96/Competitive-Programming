#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    double x,y,z;

    double a,m,n;
    cin>>m>>n>>a;

    x=m/a;y=n/a;
    //cout<<x<<" "<<y<<endl;
    if(x-(int)x>0)x++;
    if(y-(int)y>0)y++;
    //cout<<x<<" "<<y<<endl;
    cout<<(ll)x*(ll)y<<endl;

    return 0;
}