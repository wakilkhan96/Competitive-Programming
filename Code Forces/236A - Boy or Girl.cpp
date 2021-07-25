#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
	string str;
    cin >> str;

	set<char> letters;
	n = str.size();
    for (int i = 0; i < n; i++) letters.insert(str[i]);

	if(letters.size()%2==1) cout << "IGNORE HIM!\n";
	else cout << "CHAT WITH HER!\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}