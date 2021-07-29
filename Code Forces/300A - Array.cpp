#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, arr[105];
	queue <int> first_set, second_set, third_set;
	int  first_set_total = 0, second_set_total = 0, third_set_total = 0;
	cin >> n;
	for(int x=0; x<n; x++)
	{
		cin >> arr[x];
		if(arr[x]<0) first_set.push(arr[x]), first_set_total++;
		else if(arr[x]>0) second_set.push(arr[x]), second_set_total++;
		else third_set.push(arr[x]), third_set_total++;
	}	

	if(second_set.empty())
	{
		int temp;
		for(int x=0; x<2; x++)
		{
			second_set.push(first_set.front());
			first_set.pop();
		}
	}
	if(first_set.size()%2==0)
	{
		third_set.push(first_set.front());
		first_set.pop();
	}

	int temp = first_set.size();
	cout<<temp;
	for(int x=0; x<temp; x++) cout<<" "<<first_set.front(), first_set.pop();
	
	temp = second_set.size();
	cout<<"\n"<<temp;
	for(int x=0; x<temp; x++) cout<<" "<<second_set.front(), second_set.pop();
	
	temp = third_set.size();
	cout<<"\n"<<temp;
	for(int x=0; x<temp; x++) cout<<" "<<third_set.front(), third_set.pop();
	
	
}

int main()
{
	//freopen("input.txt","r", stdin);
	ios_base::sync_with_stdio;
	solve();

}


