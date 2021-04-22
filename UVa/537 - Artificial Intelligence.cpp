#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define pb(x) push_back(x)

double toDouble(string str, int i)
{
    bool negative = false;
    if(str[i]=='-') negative = true, i++;

    double value = 0;
    while (str[i]>='0' && str[i]<='9')
    {
        value *= 10;
        value += (str[i]-'0');
        i++;
    }

    if (str[i] == '.')
    {
        i++;
        int j = 10;
        while (str[i]>='0' && str[i]<='9')
        {
            value += ((double)(str[i]-'0')/j);
            j *= 10;
            i++;
        }
    }

    if (str[i] == 'm') value /= 1000;
    else if (str[i] == 'k') value *= 1000;
    else if (str[i] == 'M') value *= 1000000;

    if(negative) value*=-1;

    return value;
}
int main()
{

    int test, cou = 1;
    //char str[1000];
    string str;
    scanf("%d", &test);
    getchar();

    while(test--)
    {
        getline(cin, str);
        int length = str.length();
        double P = 0, U = 0, I = 0;
        for (int i=0; i<length; i++)
        {
            if (str[i] == 'U' && str[i+1] == '=') U = toDouble(str, i+2);
            if (str[i] == 'P' && str[i+1] == '=') P = toDouble(str, i+2);
            if (str[i] == 'I' && str[i+1] == '=') I = toDouble(str, i+2);
        }

        printf ("Problem #%d\n", cou++);
        if (U>0.0 && I>0.0) printf("P=%.2fW\n", U*I);
        else if (P>0.0 && U>0.0) printf ("I=%.2fA\n", P/U);
        else printf("U=%.2fV\n", P/I);
        printf("\n");
    }
    return 0;
}

