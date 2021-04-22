#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))

int main()
{
    string s;
    double a, b;
    char op, str[2000];

    while(getline(cin, s))
    {
        int x;
        for(x=0; s[x]; x++) str[x] = s[x];
        str[x]= '\0';
		printf("%s\n", str);
		sscanf(str, "%lf %c %lf", &a, &op, &b);

        if(a>INT_MAX) cout<<"first number too big\n";
        if(b>INT_MAX) cout<<"second number too big\n";
        if(op=='+' && a+b>INT_MAX) cout<<"result too big\n";
        else if(op=='*' && a*b>INT_MAX) cout<<"result too big\n";
    }

    return 0;
}
