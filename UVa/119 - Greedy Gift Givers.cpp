#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,cou=0;
    while(cin>>n)
    {
        if(cou)cout<<endl;
        cou++;

        string s[100];
        for(int x=0;x<n;x++)cin>>s[x];

        map<string,int>mp;
        int amt=0,p=0;
        string sender,receiver;

        for(int x=0;x<n;x++)
        {
            cin>>sender>>amt>>p;
            //if(amt%p && p!=0)mp[sender]+=amt%p;
            for(int y=0;y<p;y++)
            {
                cin>>receiver;
                mp[sender]-=(amt/p);
                mp[receiver]+=(amt/p);

                //cout<<"-->status "<<sender<<" "<<mp[sender]<<" "<<receiver<<" "<<mp[receiver]<<endl;
            }
        }

        for(int x=0;x<n;x++)
        {
            cout<<s[x]<<" "<<mp[s[x]]<<endl;
        }




    }
    return 0;
}
