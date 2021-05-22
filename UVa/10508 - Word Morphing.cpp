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
    
    char word[1005][1005];
    int n, m, i, j;
    int idx[1005];
    
    while(scanf("%d %d", &n, &m) == 2) 
    {
        while(getchar() != '\n');
        gets(word[0]);
        idx[0] = 0;
        for(i = 1; i < n; i++) 
        {
            int cnt = 0;
            gets(word[i]);
            for(j = 0; j < m; j++)
            {
                if(word[i][j] != word[0][j]) cnt++;
                //just counting the total diferences with first word 
            }
                
            idx[cnt] = i;
            // we will print the string with lowest diffrence first, then respectly
        }
        for(i = 0; i < n; i++) puts(word[idx[i]]);
    }

    
    return 0;
    
}




/*



*/