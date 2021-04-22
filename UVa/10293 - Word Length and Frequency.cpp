#include <bits/stdc++.h>
using namespace std;
#define exit_loop break

bool isAlphabet(char ch)
{
    if(ch>='a' && ch<='z') return true;
    if(ch>='A' && ch<='Z') return true;
    return false;
}

int main()
{
    //freopen("myfile.txt", "w", stdout);
    string temp, str, space = " ";
    while(getline(cin, temp))
    {
        if(temp == "#") continue;
        str = temp;
        while(getline(cin, temp))
        {
            if(temp == "#") break;
            int len = str.size();
            if(str[len - 1]!='-') str += space;
            str += temp;
        }

        //cout<<str<<endl<<endl;

        map<int, int> mp;
        map<int, int>::iterator it;
        int len = str.size(), cou;

        cou = 0;
        for(int x=0; x<len; x++)
        {   
            if(isAlphabet(str[x])) cou++;
            else if(str[x]=='\'' || str[x]=='-') continue;
            else
            {
                //printf("cou - %d\n", cou);
                if(cou>0) mp[cou] ++;
                cou = 0;
            }
        }

        if(cou>0) mp[cou] ++;//if last 

        for(it=mp.begin(); it!=mp.end(); it++) 
            printf("%d %d\n", it->first, it->second);
        if(mp.size()) printf("\n");
    }


}


/*
Sample Input
This is fun-
ny! Mr.P and I’ve never seen
this ice-cream flavour
before.Crazy eh?
#
This is fun-
ny! Mr.P and I’ve never seen
this ice-cream flavour
before.Crazy eh?
#
Sample Output
1 1
2 3
3 2
4 3
5 3
6 1
7 1
8 1
1 1
2 3
3 2
4 3
5 3
6 1
7 1
8 1



hyper!..Goal,terM,cham-
pion. Try it A!g!a!iA.N
Thank-
s
you.
G-
olly!
Thank-you-ver-
y
#
hyper!..Goal,terM,cham-
pion. Try it A!g!a!iA.N
Thank-
s
g-
reat you.
#
This is not so fun-
ny!     Mr. Pi and I've definitely never seen Ma'm-
nizea and Shereen do this tour-de-force be-
fore.         We swear!!!! Righ-
t!?.,
#





*/