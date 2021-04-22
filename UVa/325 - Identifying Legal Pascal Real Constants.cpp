#include<bits/stdc++.h>
using namespace std;

int decimal_point_count;
vector<string> parts;

string remove_pre_post_spaces(string originalString)
{
    string str;
    int len = originalString.size();
    int pre_pos = 0, post_pos = len-1;
    while (originalString[pre_pos] == ' ') pre_pos++;
    while (originalString[post_pos] == ' ') post_pos--;

    for(int x=pre_pos; x<=post_pos; x++) str += originalString[x];

    return str;
}

void try_to_split(string originalString)
{
    int len = originalString.size();
    bool found_e_or_E = false;
    string str = "";
    int x = 0;
    for( ; x<len; x++)
    {
        if(originalString[x]=='e' || originalString[x]=='E')
        {
            found_e_or_E = true;
            break;
        }
        str += originalString[x];
    }

    parts.push_back(str);
    str = "";

    if(found_e_or_E)
    {
        for( ; x<len; x++) str += originalString[x];
        parts.push_back(str);
    }
    
}

string remove_sign_or_e_E(string originalString)
{
    int len = originalString.size();
    string str = "", oS = originalString;
    int pos = 0;
    if(oS[0]=='+' || oS[0]=='-' || oS[0]=='e' || oS[0]=='E' ) pos = 1;
    for(int x=pos; x<len; x++) str += originalString[x];
    return str;
}


bool isNumeric(char ch)
{
    if(ch=='0')return true;
    if(ch=='1')return true;
    if(ch=='2')return true;
    if(ch=='3')return true;
    if(ch=='4')return true;
    if(ch=='5')return true;
    if(ch=='6')return true;
    if(ch=='7')return true;
    if(ch=='8')return true;
    if(ch=='9')return true;
    return false;
}

bool check_decimal_part(string str)
{
    decimal_point_count = 0;
    bool correctness = true;
    int len = str.size();
    for(int x=0; x<len; x++)
    {
        if(str[x]=='.')
        {
            if(x==0 || x==len-1) correctness &= false;
            decimal_point_count++;
        }
        else if( isNumeric(str[x]) ) correctness &= true;
        else correctness &= false;

        if(decimal_point_count>1) correctness &= false;

        if(!correctness) break;
    }

    if(len<1) correctness &= false;
    return correctness;

}


bool check_exp_part(string str)
{
    bool correctness = true;
    int len = str.size();
    for(int x=0; x<len; x++)
    {
        if( isNumeric(str[x]) ) correctness &= true;
        else correctness &= false;

        if(!correctness) break;
    }

    if(len<1) correctness &= false;
    return correctness;
}



int main()
{
    //cin.ignore();
    string originalString, str;
    
    while(true)
    {
        getline(cin, originalString);
        if(originalString =="*") break;

        originalString = remove_pre_post_spaces(originalString);
        string originalStr = originalString;
        //cout<<originalString<<endl;
        parts.clear();
        try_to_split(originalString);
        //for(int x=0; x<parts.size(); x++) cout<<parts[x]<<endl;
        
        //for(int x=0; x<parts.size(); x++) cout<<remove_sign_or_e_E(parts[x])<<endl;
        
        

        if(parts.size()>1)
        {
            parts[0] = remove_sign_or_e_E(parts[0]);
            parts[1] = remove_sign_or_e_E(parts[1]);
            parts[1] = remove_sign_or_e_E(parts[1]);
            //cout<<parts[0]<<" "<<parts[1]<<endl;
            bool f = check_decimal_part(parts[0]);
            bool l = check_exp_part(parts[1]);

            if(f && l) cout<<originalStr<<" is legal."<<'\n';
            else cout<<originalStr<<" is illegal."<<'\n';
        }
        else
        {
            parts[0] = remove_sign_or_e_E(parts[0]);
            //cout<<parts[0]<<endl;
            bool b = check_decimal_part(parts[0]);
            if(decimal_point_count<1) b &= false;

            if(b) cout<<originalStr<<" is legal."<<'\n';
            else cout<<originalStr<<" is illegal."<<'\n';
        }

    }

}

/*
1.2
1.
 1.0e-55
e-12  
  6.5E   
     1e-12   
    +4.1234567890E-99999   
7.6e+12.5
99



1.2 is legal.
1. is illegal.
1.0e-55 is legal.
e-12 is illegal.
6.5E is illegal.
1e-12 is legal.
+4.1234567890E-99999 is legal.
7.6e+12.5 is illegal.
99 is illegal.

*/