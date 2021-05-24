#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("myfile.txt", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string str, repeated;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>str;
		bool got = false;
		int len = str.size();

		for(int x=0; x<len-1; x++)
		{
			int temp_len = len - x;
			if(temp_len%2) continue;

			int substr_len = temp_len/2;
			//cout<<x<<" "<<x+substr_len-1<<" "<<x+substr_len<<" "<<len-1<<endl;
			string fir = str.substr(x, substr_len);
			string sec = str.substr(x+temp_len/2, substr_len);

			if(fir==sec)
			{
				repeated = fir;
				break;
			}
		}

		int times = 8/repeated.size();
		int extra = 8 - (times*repeated.size());
		while(times--) cout<<repeated;
		for(int x=0; x<extra; x++) cout<<repeated[x];
		cout<<"...\n";

	}


}





/*
6
123123
1231231
12312312
123124123124
12312412312412
12312412312412312
*/