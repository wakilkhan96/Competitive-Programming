#include<bits/stdc++.h>
using namespace std;

int main()
{
    int course,k,m;
    bool exist[10000];
    while(cin>>k)
    {
        if(k==0)break;
        cin>>m;

        memset(exist,false,sizeof(exist));

        for(int x=0;x<k;x++)
        {
            cin>>course;
            exist[course]=true;
        }

        ///possible or not
        bool possible=true;

        for(int x=0;x<m;x++)
        {
            int n,_min,cou=0,temp;
            cin>>n>>_min;

            for(int y=0;y<n;y++)
            {
                cin>>temp;
                if(exist[temp]==true)cou++;
            }

            if(cou<_min)possible=false;

        }


        if(possible)cout<<"yes"<<endl;
        else cout<<"no"<<endl;


    }

    return 0;
}
