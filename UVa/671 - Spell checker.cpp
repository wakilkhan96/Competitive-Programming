#include<bits/stdc++.h>
using namespace std;

map< string, int > mp;
map< string, int > ::iterator it;
vector< string > dictionary;

//int replaceable(string target, string str)
int replaceable(const char* w, const char* s)
{
  while (*w == *s) w++, s++;
    //*w && *s &&
  if (!strcmp(w + 1, s) || !strcmp(w, s + 1) || !strcmp(w + 1, s + 1)) return 0;
  else return -1;
}


int main()
{
    int n;
    string input;

    scanf("%d", &n);

    while( n-- )
    {
        dictionary.clear();
        mp.clear();

        //getline(cin, input); // empty line
        //cin.ignore(true, '\n');
        while( getline(cin, input) )
        {
            if(input == "#") break;
            if(input == "") continue;

            dictionary.push_back( input );
            mp[input]++;
        }

        int dict_size = dictionary.size();

        while (getline(cin, input))
        {
            if (input == "#") break;
            string target = "", str = "";

            if( mp.count(input) ) cout<<input<<" is correct";
            else
            {
                cout<<input<<":";
                for(int x=0; x<dict_size; x++)
                {
                    str = input;
                    target = dictionary[x];
                    //cout<<"target = "<<target<<"            str = "<<str<<endl;

                    int val = replaceable(&target[0], &str[0]);
                    //cout<<"val = "<<val<<endl;
                    if(val == 0) cout<<" "<<target;
                }
            }

            putchar('\n');

        }


        if(n) putchar('\n');
    }

    return 0;
}
