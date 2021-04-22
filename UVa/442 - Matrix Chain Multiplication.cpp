#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
//#define mp(x,y) make_pair(x,y)
pair<int, int> first, second, top;




int main()
{
    ///freopen("output.txt","w",stdout);
    int a, b, n, result = 0;
    char c;
    map<char, pair<int, int> > matrix;

    cin>>n;
    for(int x=0; x<n; x++)
    {
        cin >> c >> a >> b;
        matrix[c]  = make_pair(a, b);
    }
    cin.ignore(100, '\n');

    stack<pair<int ,int> > st;

    bool error = false;
    string str;
    while( getline(cin, str) )
    {
        //cout<<str<<endl;
        int length = str.length();

        error = false;
        result = 0;

        int count = 0;
        for(int x=0; x<length && length>1; x++)
        {
            if(str[x]=='(') st.push( make_pair(-1, -1) );
            else if( isalpha(str[x]) ) st.push( matrix[ str[x] ] );
            else if(str[x]==')')
            {
                while(1)
                {
                    second = st.top();
                    st.pop();
                    first = st.top();
                    st.pop();

                    if (first.second != second.first)
                    {
                        error = true;
                        break;
                    }

                    result += first.first * first.second * second.second;

                    top = st.top();
                    if( top.first==-1 && top.second==-1 )
                    {
                        st.pop();
                        st.push( make_pair(first.first, second.second) );
                        break;
                    }
                    else st.push( make_pair(first.first, second.second) );

                    count--;
                }
            }
        }///end_for_loop

        if(error) cout<<"error"<<endl;
        else cout<<result<<endl;

    }



    return 0;
}

