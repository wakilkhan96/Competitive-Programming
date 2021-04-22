#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)

int main()
{
    int n;
    vector<int>cards;
    vector<int>discarded;

    while(scanf("%d", &n))
    {
        cards.clear();
        discarded.clear();

        if(n==0)return 0;
        for(int x=1; x<=n; x++) cards.pb(x);

        int y = 0;
        while(y<n-1)
        {
            discarded.pb( cards[0] );
            cards.pb( cards[1] );
            cards.erase( cards.begin()+0, cards.begin()+2 );
            y++;
        }

        int len = discarded.size();
        cout<<"Discarded cards:";
        for(int x=0; x<len; x++)
        {
            if(x)cout<<",";
            cout<<" ";
            cout<<discarded[x];
        }
        cout<<endl<<"Remaining card: "<<cards[0]<<endl;


    }



    return 0;
}

