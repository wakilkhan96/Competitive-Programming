#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    int x=0,y,z;
    string str;
 
    int test;
 
    scanf("%d",&test);
    while(test--)
    {
        cin>>str;
 
        if(str[1]=='+')x++;
        else x--;
    }
 
    cout<<x<<endl;
 
    return 0;
}