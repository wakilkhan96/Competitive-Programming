#include <bits/stdc++.h>
using namespace std;


/*
while(n != 0)
{
    remainder = n % 10;
    rev = rev * 10 + remainder;
    n /= 10;
}
*/
string toString(int num)
{
    if(num==0) return "0";
    int y = 0;
    string str = "";
    while(num)
    {
        int rem = num%10;
        str.insert(str.begin(), (rem + '0') );
        num = num/10;
    }
    return str;
}


int toInteger(string str )
{
    int num = 0;
    int length = str.length();
    for(int x=0; x<length; x++)
    {
        num = num*10 + (str[x]-'0');
    }

    return num;
}



int main()
{
    int num;
    while(cin>>num)
    {
        if(!num)break;
        printf("Original number was %d\n", num);
        string num_str = "", temp = "", ascending = "", descending = "";
        for(int x=0;  ;x++)
        {
            num_str = toString( num );
            ascending = num_str;
            sort(ascending.begin(), ascending.end() );
            temp = ascending;
            reverse(temp.begin(), temp.end());
            descending = temp;

            int num_ascending = toInteger(ascending);
            int num_descending = toInteger(descending);
            int ans = num_descending - num_ascending;
            cout<<num_descending<<" - "<<num_ascending<<" = "<<ans<<endl;

            if(x)
            {
                //cout<<"ans - "<<ans<<" - "<<num<<" - num"<<endl;
                if(ans == num)
                {
                    printf("Chain length %d\n", x+1);
                    break;
                }
            }
            num = ans;

        }
    }


    return 0;
}

