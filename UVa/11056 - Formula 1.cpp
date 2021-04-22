#include<bits/stdc++.h>
using namespace std;

struct pairElements
{
    string name;
    int time;
 
    pairElements(string name, int time)
    {
        this->name = name;
        this->time = time;
    }
};

int main()
{
    //freopen ("myfile.txt","w",stdout);
    //cin.ignore();
    int n;
	string s, name, tmp;
	int mi, sec, ms;
	
	while (cin>>n) 
    {
		vector<pairElements> v;
		for (int i=0;i<n;i++) 
        {
			cin>>name;
			cin>>tmp>>mi>>tmp>>sec>>tmp>>ms>>tmp;
			int time = mi*60*1000 + sec*1000 + ms;
			v.push_back( pairElements(name, time) );
		}

        sort(v.begin(), v.end(), [](const pairElements e1, const pairElements e2)
        {
            if(e1.time != e2.time) return (e1.time < e2.time);
            else
            {
                string temp;
                temp = e1.name;
                for(int i=0; i<temp.size(); i++) temp[i] = tolower(temp[i]);
                string e1_name = temp;
                temp = e2.name;
                for(int i=0; i<temp.size(); i++) temp[i] = tolower(temp[i]);
                string e2_name = temp;
                return e1_name < e2_name;
            }
        });

        int vec_size = v.size(), row = 1;
        for(int x=0; x<vec_size; x+=2) 
        {
            printf ("Row %d\n", row++);
            //if( x == vec_size-1 ) printf ("%s\n", v[x].name);
            //else printf ("%s\n%s\n", v[x].name, v[x+1].name);
            if( x == vec_size-1 ) cout<<v[x].name<<'\n';
            else cout<<v[x].name<<'\n'<<v[x+1].name<<'\n';
        }
        printf ("\n");

    }
}