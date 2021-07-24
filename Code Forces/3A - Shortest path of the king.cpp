#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string start, end;
    cin>>start>>end;

    int cou = 0, res = max(abs(start[0]-end[0]), abs(start[1]-end[1]));
    cout<<res<<endl;
    while(start != end)
    {
        if(start[0]>end[0]) start[0] --, cout<<'L';
        else if(start[0]<end[0]) start[0] ++, cout<<'R';

        if(start[1]>end[1]) start[1] --, cout<<'D';
        else if(start[1]<end[1]) start[1] ++, cout<<'U';
        cout<<'\n';

        cou++;

        //cout<<start<<" "<<end<<'\n';
    }

    //printf("%d\n", cou);
}



/*
a8
h1

7
RD
RD
RD
RD
RD
RD
RD

*/