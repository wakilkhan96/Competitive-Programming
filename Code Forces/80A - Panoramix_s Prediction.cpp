#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//return main();
vector<int>v;
int ara[70];
 
void __prime()
{
    int x,y;
    memset(ara,0,sizeof(ara));
    for(x=4;x<60;x+=2)ara[x]=1;
 
    for(x=3;x<60;x+=2)
    {
        if(ara[x]==0)
        {
            for(y=2;x*y<=60;y++)ara[x*y]=1;
        }
 
 
    }
 
    for(x=2;x<60;x++)if(ara[x]==0)v.push_back(x);
}
 
int main()
{
    int x,y,z,n,m;
    __prime();
 
    cin>>n>>m;
    int pos=0;
    for(x=0;x<v.size();x++)
    {
        if(v[x]==n){
            pos=x;
            break;
        }
    }
 
    if(m==v[pos+1])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    v.clear();
    return 0;
 
}