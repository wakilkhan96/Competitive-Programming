#include<bits/stdc++.h>
using namespace std;

bool isHaiku(int f, int m, int l) 
{
    return (f==5 && m==7 && l==5);
}

bool isVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y') return true;
    else return false;
}

int count_syllables(string str)
{
    int count = 0;
    int len = str.size();
    bool flag = false; //flag means previous character was vowel
    for(int x=0; x<len; x++)
    {
        if(isVowel(str[x]))
        {
            if(!flag)
            {
                count++;
            }
            flag = true;

        }
        else flag = false;
    }
    return count;
}

int main()
{
    //cin.ignore();
    string originalString, str;
    while(true)
    {
        getline(cin, originalString);
        if(originalString =="e/o/i") break;
        
        vector<string> lines;
        
        char delimiter = '/';
        string tmp = "";
        stringstream ss(originalString);
        while(std::getline(ss, tmp, delimiter)) 
        {
            lines.push_back(tmp);
        }
        //for(int x=0; x<3; x++) cout<<lines[x]<<endl;

        int f = 0, m = 0, l = 0;
        f = count_syllables(lines[0]);
        m = count_syllables(lines[1]);
        l = count_syllables(lines[2]);

        //printf("%d %d %d \n", f, m, l);

        if(isHaiku(f, m, l))printf("Y\n");
        else
        {
            if(f != 5) printf("1\n");
            else if(m != 7) printf("2\n");
            else printf("3\n");
        } 
    }

}