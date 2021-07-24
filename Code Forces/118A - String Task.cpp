#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    if(ch=='A'||ch=='a') return true;
    if(ch=='E'||ch=='e') return true;
    if(ch=='I'||ch=='i') return true;
    if(ch=='O'||ch=='o') return true;
    if(ch=='U'||ch=='u') return true;
    if(ch=='Y'||ch=='y') return true;
    return false;
}

char to_lower(char ch)
{
    if(ch>='A' && ch<='Z') return ch+32;
    else return ch;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int size;
    string str;
    cin>>str;
    size = str.size();
    
    for(int x=0; x<size; x++)
    {
        if(!isVowel(str[x])) printf(".%c", to_lower(str[x]));
    }
    
    return 0;
}
