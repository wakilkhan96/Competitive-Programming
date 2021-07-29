#include<bits/stdc++.h>
using namespace std;

string add_year_by_1(string str)
{
	int sum, carry; 
	
	carry = 1;
	for(int x=3; x>=0; x--)
	{
		sum = (str[x]-'0') + carry;
		if(sum>9) sum = 0, carry = 1;
		else carry = 0;
		str[x] = ('0'+sum);
	}

	return str;
}

void solve()
{
    string year;
	map<char, int> digits;
	cin>>year;

	year = add_year_by_1(year);

	while(true)
	{
		for(int x=0; x<4; x++) digits[year[x]]++;
		if(digits.size() == 4)
		{
			cout<<year<<"\n";
			break;
		}
		digits.clear();
		year = add_year_by_1(year);
	}
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}


