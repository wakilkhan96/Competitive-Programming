#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cou = 0, v;
    cin >> n;
    int chest(0), biceps(0), back(0);

	int pointer = 0;
    for (int i = 1; i <= n; i++)
    {
		cin>>v;
		if(pointer==0) chest += v;
		else if(pointer==1) biceps += v;
		else back += v;

		pointer++;
		if(pointer>2) pointer = 0;

		//cout<<chest<<" - "<<biceps<<" - "<<back<<"\n";
    }

	if(chest>=biceps && chest>=back) cout<<"chest\n";
	else if(biceps>=chest && biceps>=back) cout<<"biceps\n";
	else cout<<"back\n";

}

int main()
{
	ios_base::sync_with_stdio;
	solve();
}