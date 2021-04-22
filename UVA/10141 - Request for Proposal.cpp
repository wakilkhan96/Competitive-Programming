#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,z,cou=1;
    double y;
    string s;
    while(cin>>n>>p)
    {

        if(n+p==0)break;
        if(cou-1)cout<<endl;
        getchar();
        for(int x=0;x<n;x++)
        {
            getline(cin,s);
            //cout<<"->"<<s<<endl;
        }
        double price=99999999.00; int met=0;
        string str="";

        //getchar();
        for(int x=0;x<p;x++)
        {

            getline(cin,s);
            //cout<<"->"<<s<<endl;
            cin>>y>>z;

            getchar();
            string temp;
            for(int i=0;i<z;i++)
            {
                getline(cin,temp);
                //cout<<"->"<<temp<<endl;
            }

            if(z>met)
            {
                met=z;
                str=s;
                price=y;
            }
            else if(z==met && y<price)
            {
                met=z;
                str=s;
                price=y;
            }
        }

        printf("RFP #%d\n",cou);
        cout<<str<<endl;
        cou++;

    }

    return 0;
}

