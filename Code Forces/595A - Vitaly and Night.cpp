#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define on true;
//#define off false;
 
int main()
{
 
    int n,m,cou=0,temp1=0,temp2=0;
    cin>>n>>m;
 
    while(n--)
    {
        for(int x=0;x<m;x++)
        {
            cin>>temp1>>temp2;
            if(temp1==1 || temp2==1)cou++;
        }
    }
 
 
    printf("%d\n",cou);
 
    //return main();
 
}