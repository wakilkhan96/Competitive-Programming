#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,w,x,y,z,sum;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        y=0;
        w=(n+1)/2;       //finding the line number let 2n+1=17 as 2n+1 is a odd number
        y=w*w;          //finding the n'th(last) odd number of that line
        sum=0;
        sum=(y*y)-(y-3)*(y-3);    //sum till y'th odd - sum till y-3'th odd
        printf("%lld\n",sum);
    }
    return 0;
}
