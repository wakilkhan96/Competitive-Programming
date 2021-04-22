#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string>brand;
vector<pair<ll,ll> >price;
pair<ll,ll>p;
int main()
{
    ll maxi,mini,test,d_size,i_size,x,y,z,temp1,temp2,temp,cou,n_l=0;
    string s;
    while(cin>>test)
    {
        while(test--)
        {
            cin>>d_size;
            maxi=0;
            mini=1100000;
            while(d_size--)
            {
                cin>>s>>temp1>>temp2;
                brand.push_back(s);
                price.push_back(make_pair(temp1,temp2));
                if(maxi<temp2)maxi=temp2;
                if(mini>temp1)mini=temp1;
            }
            cin>>i_size;
            while(i_size--)
            {
                cin>>temp;
                s="UNDETERMINED";cou=0;
                if(temp>=mini && temp<=maxi)
                {
                    for(x=0;x<price.size();x++)
                    {
                        p=price[x];
                        if(temp>=p.first && temp<=p.second)
                        {
                            s=brand[x];
                            ++cou;
                        }
                        if(cou>1)
                        {
                            s="UNDETERMINED";break;
                        }
                    }

                }

                cout<<s<<endl;

            }
            if(test)printf("\n");
            brand.clear();
            price.clear();
        }
    }
    return 0;
}
