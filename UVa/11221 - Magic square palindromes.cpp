#include <bits/stdc++.h>
using namespace std;

string purify(string temp)    
{
    int len = temp.size();
    string str = "";
    for(int x=0; x<len; x++)
    {
        if( isalpha(temp[x]) ) str += temp[x];
    }        
    return str;
}

int main()
{
    int test, cou = 1;
    int square_size;
    scanf("%d", &test);

    cin.ignore();
    while(test--)
    {
        string line;
        getline(cin, line);
        string str = purify(line);
        //cout<<str<<endl;

        int length = str.size();
        bool magic = true;
        if(magic)
        {
            string reverseStr = str;
            reverse(reverseStr.begin(), reverseStr.end());
            if(str != reverseStr) magic = false;
        }

        if(magic)
        {
            int sqroot = sqrt(length);
            if(length != sqroot*sqroot) magic = false;

            square_size = sqroot;
            string arr[square_size];
            for(int i=0; i<square_size; i++) arr[i] = "";
            int index = 0;
            for(int i=0; i<square_size; i++)
            {
                for(int j=0; j<square_size; j++)
                {
                    arr[i] += str[index++];
                }
            }

            str = "";
            for(int i=0; i<square_size; i++) str += arr[i];
            //cout<<str<<endl;

            string reverseStr = str;
            reverse(reverseStr.begin(), reverseStr.end());
            if(str != reverseStr) magic = false;

        }


        if(magic)
        {
            printf("Case #%d:\n", cou++);
            printf("%d\n", square_size);
        }
        else
        {
            printf("Case #%d:\n", cou++);
            printf("No magic :(\n");   
        }



    }

    
}


/*

3
sator arepo tenet opera rotas
this sentence is, quite clearly, not a magic square palindrome! but then again, you never know...
muse sun, eve.s e(y)es even use sum.




*/