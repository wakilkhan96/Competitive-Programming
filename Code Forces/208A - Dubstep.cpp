#include <bits/stdc++.h>
#define fast_io  ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;
 
int cmp(int a, int b) { return a>b; }
 
bool containsWUB( string str)
{
    int l = str.length();
    if( str[l-3]=='W' && str[l-2]=='U' && str[l-1]=='B' ) return true;
 
    return false;
}
 
 
int main()
{
    fast_io;
 
    int test, n, i;
    string str, word;
    cin>>str;
    n = str.length();
    vector<string> vec;
    word = "";
    for(int x=0; x<n; x++)
    {
        word += str[x];
 
        if( containsWUB( word ) )
        {
            int length =  word.length();
            word.erase(word.begin()+length-3, word.end());
            length -= 3;
            if( length>0) vec.push_back(word);
            word = "";
        }
    }
    if(word.length()>0) vec.push_back(word);
 
    for(int x=0; x<vec.size(); x++) cout<<vec[x]<< " ";
    cout << endl;

}