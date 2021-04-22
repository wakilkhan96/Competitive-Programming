#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    //freopen("mytxt.txt","w",stdout);
    int n,x,y,z,length,cou;

    string sss = " Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";


    while(cin>>n)
    {
        string str[1000];
        for(x=0;x<n;x++)cin>>str[x];

        string s="";
        int i;
        i=n/16;
        if(n%16)i++;
        for(x=0;x<i;x++)s+=sss;

        z=0;
        length = s.size();

        for(y=0;y<length;y++)
        {
            if(s[y]==' ')
            {
                if(y>0)cout<<endl;
                cout<<str[z]<<": ";
                z++;
            }
            else cout<<s[y];

            if(z==n)z=0;
        }
        cout<<endl;
    }

    return 0;

}
