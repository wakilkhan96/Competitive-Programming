#include<bits/stdc++.h>
using namespace std;

int _max(int x, int y)
{
    if(x>y)return x;
    else return y;
}
int gcd(int x,int y)
{
    if(y==0)return x;
    gcd(y,x%y);
}
int main()
{
    int x,y;
    cin>>x>>y;
    x=_max(x,y);
    y=6-x+1;
    x=gcd(y,6);
    if(6%y==0)cout<<"1/"<<6/y<<endl;
    else cout<<y/x<<"/"<<6/x<<endl;
    //return;

}
