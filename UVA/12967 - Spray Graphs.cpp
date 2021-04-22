#include<bits/stdc++.h>
using namespace std;
int a(int b)
{
    if(b==2)return 4;
    return a(b-1)*2;
}
int f(int n)
{
    if(n==1)return 1;
    if(n==2)return 4;
    if(n==3)return 12;
    return f(n-1)+a(n);

}
int main()
{
    int x,y,z;
    cin>>y;
    while(y--)
    {
        cin>>x;
        cout<<f(x)<<endl;
    }
    return 0;
}
