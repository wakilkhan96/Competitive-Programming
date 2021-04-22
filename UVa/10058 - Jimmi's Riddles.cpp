#include<bits/stdc++.h>
using namespace std;

vector<string> parts;

/*
ARTICLE = a | the
NOUN = tom | jerry | goofy | mickey | jimmy | dog | cat | mouse
VERB = hate | love | know | like | VERBs

*/
bool isArticle(string str)
{
    if(str=="a" || str=="the") return true;
    return false;
}
bool isNoun(string str)
{
    if(str=="tom" || str=="jerry" || str=="goofy" || str=="mickey") return true;
    if(str=="jimmy" || str=="dog" || str=="cat" || str=="mouse") return true;
    return false;
}

bool isVerb(string str)
{
    if(str=="hate" || str=="love" || str=="know" || str=="like") return true;
    if(str=="hates" || str=="loves" || str=="knows" || str=="likes") return true;
    return false;
}

bool process_parts(vector<string> parts_of_speech)
{
    bool isCorrect = true;
    int len = parts_of_speech.size();
    string p_o_s = "";

    for(int x=0; x<len; x++)
    {
        if( isArticle(parts_of_speech[x]) ) p_o_s += 'a';
        else if( isNoun(parts_of_speech[x]) ) p_o_s += 'n';
        else if( isVerb(parts_of_speech[x]) ) p_o_s += 'v';
        else if( parts_of_speech[x]=="and" ) p_o_s += '&';
        
    }
    //cout<<p_o_s<<endl;

    len = p_o_s.size();
    bool pos_active_index[len];
    memset(pos_active_index, true, sizeof(pos_active_index));
    for(int x=1; x<len; x++)
    {
        if(p_o_s[x]=='n' && p_o_s[x-1]=='a') pos_active_index[x-1] = false;
    }
    string str = "";
    for(int x=0; x<len; x++) if(pos_active_index[x]) str += p_o_s[x];
    //cout<<str<<endl;

    p_o_s = str;
    len = p_o_s.size();
    bool pos_active_index2[len];
    memset(pos_active_index2, true, sizeof(pos_active_index2));
    for(int x=1; x<len-1; x++)
    {
        if(p_o_s[x]=='&' )
        {
            if(p_o_s[x-1]=='n' && p_o_s[x+1]=='n') 
            {
                pos_active_index2[x] = false;
                pos_active_index2[x-1] = false;
            }
        }
    }

    str = "";
    for(int x=0; x<len; x++) if(pos_active_index2[x]) str += p_o_s[x];
    //cout<<str<<endl;
    if( str != "nvn" ) isCorrect &= false;

    return isCorrect;

}

int main()
{
    //cin.ignore();
    string originalString;
    while( getline(cin, originalString) )
    {
        //getline(cin, originalString);

        parts.clear();
        char delimiter = ',';
        string tmp = "";
        stringstream ss(originalString);
        while(getline(ss, tmp, delimiter)) 
        {
            parts.push_back(tmp);
        }
        //for(int x=0; x<parts.size(); x++) cout<<parts[x]<<endl;
        vector<string> parts_of_speech;
        bool isCorrect = true;
        for(int x=0; x<parts.size(); x++)
        {
            parts_of_speech.clear();
            stringstream ss_new(parts[x]);
            while(ss_new >> tmp) parts_of_speech.push_back(tmp);
            //for(int i=0; i<parts_of_speech.size(); i++) cout<<parts_of_speech[i]<<endl;
            //printf("-\n");
            isCorrect &= process_parts(parts_of_speech);
        }

        if(isCorrect) printf("YES I WILL\n");
        else printf("NO I WON'T\n");
    }

}