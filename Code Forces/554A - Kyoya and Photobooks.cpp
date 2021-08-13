
#include<bits/stdc++.h>
#define ALL(X) ((X).begin(), (X).end())
using namespace std;

void solve()
{
	string str;
	cin>>str;
	int len = str.size();
	cout << (len+1)*25+1 << "\n";
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}

/*
input:
hi
output:
76

[a-z]hi,  // ahi, bhi, chi, dhi, ...., zhi
h[a-z]i,  // hai, hbi, hci, hdi, ...., hzi
hi[a-z],  // hia, hib, hic, hid, ...., hiz,

duplicates are hhi, hii, so total = (2+1)*26-2 = 76 = (2+1)*25+1
so that the number of ways is always (length of string + 1) * 25 + 1.


*/