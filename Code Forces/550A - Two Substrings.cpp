
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	string str;
	cin>>str;
	int len = str.size();
	bool AB = false, BA = false;
	for(int i=0, j=0; i<len-1 && !(AB&&BA); i++)
	{
		j = i+1;
		if(str[i]=='A' && str[j]=='B')
		{
			AB = true;
			for(int x=0, y=0; x<i-1; x++)
			{
				y = x+1;
				if(str[x]=='B' && str[y]=='A') BA = true;
				
			}
		}  
	}

	if(!(AB&&BA))
	{
		AB = false, BA = false;
		for(int i=0, j=0; i<len-1 && !(AB&&BA); i++)
		{
			j = i+1;
			if(str[i]=='B' && str[j]=='A')
			{
				BA = true;
				for(int x=0, y=0; x<i-1; x++)
				{
					y = x+1;
					if(str[x]=='A' && str[y]=='B') AB = true;
				}
			}  
		}
	}
    cout<< (AB&&BA? "YES\n" : "NO\n");
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}



/*
There are many ways to solve this problem. Author solution does the following: check if substring "AB" goes before "BA", and then vice versa, if "BA" goes before "AB".

You can do it in the following way: find the first occurence of "AB" then check all substrings of length two to the right of it to check if substring "BA" also exists. Then do it vice versa.

Complexity of the solution is O(n), where n is the length of the given string.

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    int sx = s.size() + 1, sy = sx, ex = -1, ey = -1;
    REP(i, s.size() - 1){
        if(s[i] == 'A' && s[i + 1] == 'B') {
            sx = min(sx, i + 1);
            ex = max(ex, i);
        }
        if(s[i] == 'B' && s[i + 1] == 'A') {
            sy = min(sy, i + 1);
            ey = max(ey, i);
        }
    }
    if((ex != -1 && ey != -1) && (sx < ey || sy < ex)){
        cout << "YES" << endl;
    } else cout << "NO" << endl;
}
*/