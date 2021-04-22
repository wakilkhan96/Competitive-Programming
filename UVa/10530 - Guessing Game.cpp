#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>v[2];

int main()
{
    ll x,y,z,checker,total;
    bool detector;
    string s;
    while(cin>>x && x)
    {
        getchar();
        getline(cin,s);
        total++;
        if(s=="right on")
        {
            detector=true;
            for(y=0;y<v[0].size() && total && detector;y++)
            {
                if(x>v[0][y])checker=0;
                else if(x<v[0][y])checker=1;
                else detector=false;

                if(checker!=v[1][y])detector=false;
            }
            if(detector)printf("Stan may be honest\n");
            else printf("Stan is dishonest\n");
            v[0].clear();
            v[1].clear();
            total=0;
        }
        else
        {
            if(s=="too low")
            {
                v[0].push_back(x);
                v[1].push_back(0);
            }
            else
            {
                v[0].push_back(x);
                v[1].push_back(1);
            }
        }
    }
    return 0;
}
