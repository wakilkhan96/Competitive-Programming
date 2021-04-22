#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
vector<int> num;


int main()
{
    int test, cou = 1;
    scanf("%d", &test);
    //cin.ignore(true, '\n');
    while( test-- )
    {
        int n;
        cin>>n;
        map<string, int>mp;
        while(n--)
        {
            string temp;
            int num;
            cin>>temp>>num;
            mp[temp] = num;
        }
        int days;
        cin>>days;
        string temp;
        cin>>temp;

        printf("Case %d: ", cou++);
        if(mp.count( temp ))
        {
            int day_needed = mp[temp];

            if(day_needed<=days)printf("Yesss\n");
            else if(day_needed<=days+5)printf("Late\n");
            else printf("Do your own homework!\n");
        }
        else printf("Do your own homework!\n");


    }

    return 0;
}

