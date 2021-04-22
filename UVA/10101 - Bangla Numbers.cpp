#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))

void fun(string str)
{
    int length = str.length();

    int rest, shata, hajar, lakh, kuti;
    int num = 0;
    int x = length-1, count = 0;
    for( count = 0;  count<2 && x>=0;  x--, count++) num = (str[x]-'0')*pow(10, count) + num;
    rest = num;
    num = 0;
    for( count = 0;  count<1 && x>=0;  x--, count++) num = (str[x]-'0')*pow(10, count) + num;
    shata = num;
    num = 0;
    for( count = 0;  count<2 && x>=0;  x--, count++) num = (str[x]-'0')*pow(10, count) + num;
    hajar = num;
    num = 0;
    for( count = 0;  count<2 && x>=0;  x--, count++) num = (str[x]-'0')*pow(10, count) + num;
    lakh = num;
    num = 0;
    for( count = 0;  count<2 && x>=0;  x--, count++) num = (str[x]-'0')*pow(10, count) + num;
    kuti = num;

    if(kuti) printf(" %d kuti", kuti);
    if(lakh) printf(" %d lakh", lakh);
    if(hajar) printf(" %d hajar", hajar);
    if(shata) printf(" %d shata", shata);
    if(rest) printf(" %d", rest);


}

int main()
{
    //freopen("output.txt","w", stdout);
    int test = 1;
    string str;

    while(cin>>str)
    {
        printf("%4d.", test++);
        if(str=="0") printf(" 0");

        int length = str.length();
        if(length>7)
        {
            str.insert(str.begin()+(length-7), ' ');
            stringstream ss(str);
            string temp = "";
            int i = 1;
            while(ss>>temp)
            {
                fun(temp);
                if(i)cout<<" kuti";
                i--;
            }
        }
        else fun(str);
        printf("\n");

    }


    return 0;
}



/*

#include <cstdio>
using namespace std;

void bangla(long long int n)
{
    if (n >= 10000000){
        bangla (n / 10000000);
        printf (" kuti");
        n %= 10000000;
    }
    if (n >= 100000){
        bangla (n / 100000);
        printf (" lakh");
        n %= 100000;
    }
    if (n >= 1000){
        bangla (n / 1000);
        printf (" hajar");
        n %= 1000;
    }
    if (n >= 100){
        bangla (n / 100);
        printf (" shata");
        n %= 100;
    }
    if (n)
        printf (" %d",n);
}
int main()
{
    long long int n;
    int Case=1;
    while (scanf("%lld",&n)!=EOF){
        printf ("%4d.",Case++);
        if (n==0) printf(" 0");
        bangla (n);
        printf("\n");
    }
    return 0;
}

*/


