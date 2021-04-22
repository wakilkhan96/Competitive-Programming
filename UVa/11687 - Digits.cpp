#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define infinite_limit 1000000
int main()
{
    string s;
    int len;
    while(cin>>s)
    {
        if(s=="END")break;

        for(int x=1;x<infinite_limit;x++)
        {
            len = s.size();

            stringstream ss;
            ss << len;
            string str = ss.str();

            if(s==str)
            {
                cout<<x<<endl;
                break;
            }

            s=str;


        }




    }

    return 0;
}
