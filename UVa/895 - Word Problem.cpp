#include<bits/stdc++.h>
using namespace std;

vector<string>dictionary;


int findWords(string str)
{
    vector<char> characters;
    int mp[50], mpCopy[50];
    memset(mp, 0, sizeof(mp));
    memset(mpCopy, 0, sizeof(mpCopy));
    set<string> exists;
    exists.clear();
    stringstream ss(str);
    char ch;
    int total = 0;
    while(ss>>ch) characters.push_back(ch), mp[ch-'a']++, mpCopy[ch-'a']++, total++; 

    int cou = 0;
    
    int dict_size = dictionary.size();
    for(int i=0; i<dict_size; i++)
    {
        for(int x=0; x<50; x++) mpCopy[x] = mp[x];
        string temp = dictionary[i];
        int temp_size = temp.size();
        int j=0;
        for(j=0; j<temp_size; j++)
        {
            if(mpCopy[temp[j]-'a']<1) break;
            else mpCopy[temp[j]-'a']--;
        }
        if(j==temp_size)
        {
            cou++;
        } 
    }

    return cou;
}

int main()
{
    //freopen("myfile.txt", "w",stdout);
    string str;
    while(cin>>str)
    {
        if(str=="#") break;
        dictionary.push_back(str);
    }

    getchar();
    while(true)
    {
        getline(cin, str);
        if(str=="#") break;
        int count = findWords(str);
        cout<<count<<'\n';
    }
    return 0;
}



/*
Sample Input
ant
bee
cat
dog
ewe
fly
gnu
#
b e w
b b e e w w
t a n c u g d
#
Sample Output
0
2
3
*/