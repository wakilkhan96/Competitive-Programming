#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string sequence, instruction;
	int pos = 0;
	cin>>sequence >> instruction;
	int len = instruction.size();
	for(int i=0; i<len; i++)
	{
		if(instruction[i]==sequence[pos]) pos++;
	}

	cout<<pos+1<<"\n";


}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();//

}