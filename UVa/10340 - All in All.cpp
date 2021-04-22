#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000000  
typedef long long ll;


int main()
{
    //freopen("myfile.txt", "w", stdout);
    int n, s;
    string str1, str2;
    while(cin>>str1>>str2)
    {
        //cout<<"->"<<str1<<"-"<<str2<<endl;
        int len1 = str1.size(), len2 = str2.size();
        int cou = 0, i = 0, j = 0;
        for(i=0; i<len1; i++)
        {
            while(j<len2)
            {
                if(str1[i]==str2[j]) 
                {
                    cou++; j++; break;
                }
                j++;
            }
        }
        if(cou==len1) printf("Yes\n");
        else printf("No\n");
     
     }
    
}




/*
Sample Input
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
Sample Output
Yes
No
Yes
No

*/