#include<bits/stdc++.h>
using namespace std;


vector<string>vec;
bool ans;

bool cmp(string a, string b)
{
    return a.size() < b.size();
}

bool isPrefix(string toSearch, string target)
{
    for(int i=0; i<toSearch.size(); i++)
    {
        if(toSearch[i] != target[i])
            return false;
    }
    return true;
}

int main()
{
    int gL = 1;
    string toSearch, target;
    string str;
    while(cin>>str)
    {
        if(str == "9")
        {
            ans = false;
            sort(vec.begin(), vec.end(), cmp);
            //Clean vec

            for(int x=0; x<vec.size() && !ans; x++)
            {
                for(int y=x+1; y<vec.size() && !ans; y++)
                {
                    toSearch = vec[x], target = vec[y];
                    if(isPrefix(toSearch, target))
                    {
                        ans = true;
                        break;
                    }
                }
            }

            if(ans)
                printf("Set %d is not immediately decodable\n", gL++);
            else
                printf("Set %d is immediately decodable\n", gL++);

            vec.clear();
        }
        else
        {
            vec.push_back(str);
        }
    }
return 0;
}
