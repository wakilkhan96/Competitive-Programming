#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,z,hunters,extra_hunters,props,objects,extra_objects;
    while(scanf("%lld%lld%lld",&props,&hunters,&objects)==3)
    {
        extra_objects=objects-props;
        extra_hunters=hunters-extra_objects;
        if(extra_hunters<=0)printf("Props win!\n"); //suppose case is 5 25 50
        else printf("Hunters win!\n");
    }
    return 0;
}
