#include <bits/stdc++.h>
using namespace std;

char toUpper(char ch){
    if(ch>='a' && ch<='z') ch -= 32;
    return ch;
}
char toLower(char ch){
    if(ch>='A' && ch<='Z') ch += 32;
    return ch;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str = "iloverover";
    vector<string> vec;
    map<string, int> wordCount;
    //getchar();
    while(getline(cin, str)) vec.push_back(str),  wordCount[str]++;
    //getchar();
    int size = vec.size();
    //cout<<wordCount["a"]<<'\n';
    for(int i=0; i<size; i++)
    {     
        str = vec[i];
        int len = str.size();
        bool notFound = true;
        for(int x=0; x<len-1 && notFound; x++)
        {
            string str1 = str.substr(0, x+1);
            string str2 = str.substr(x+1, len-x+1);
            // cout<<str1<<" "<<str2<<endl;
            if(wordCount[str1]>0 && wordCount[str2]>0) {
                cout<<str<<"\n";
                notFound = false;
            }
        }

    }
    // string str1 = str.substr(0, 3+1);
    // string str2 = str.substr(3+1, 10-3+1);

    // cout<<str1<<" "<<str2<<endl;

    
    return 0;
    
}




/*



*/